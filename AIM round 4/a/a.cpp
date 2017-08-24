#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define cn(x) cout << #x << " = " << x << endl;


void print(vector<int> & v){
	for(int x : v) cout << x << " ";
	cout << endl;
}

int solve(string & s, int k){
	vector<int> v(26,0);
	for(char c : s){
		v[c - 'a']++;
	}
	int count = 0;
	for(int x : v){
		if(x != 0)
			count++;
	}
	int ans = k - count;
	if(ans <= 0) return 0;
	int needed = ans;
	sort(v.begin(), v.end());
	for(int i = v.size()-1; i>=0; i--){
		int extra = v[i] - 1;
		if(extra <= 0) return -1;
		needed -= extra;
		if(needed <= 0) break;
	}	
	if(needed > 0) 
		return -1;
	return ans;
}

int main(){
	
	string s;
	cin >> s;
	int k;
	cin >> k;
	
	int ans = solve(s,k);
	if(ans != -1 )
		cout << ans << endl;
	else
		cout << "impossible" << endl;
	
	return 0;
}
