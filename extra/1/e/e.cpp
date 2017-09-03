#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

#define cn(x) cout << #x << " = " << x << endl;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int len = n;
	string res;
	int rem = 0; 
	if(n%2==0)rem++;
	for(int i = 0; i < n; i++){
		if(i%2==rem)
			res.push_back(s[i]);
		else
			res.insert(0, 1, s[i]);
	}
	cout << res << endl;

}
