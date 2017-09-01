#include <algorithm>
#include <cstdlib> //div_t
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define cn(x) cout << #x << " = " << x << endl;

bool isOdd(int x){
	return ((x%2)==1);
}

bool solve(vector<int> & v, int n){
	if(!isOdd(v[0]) || !isOdd(v[n-1])) return false;
	if(isOdd(n)) return true;
	//~ cn(n)
	//~ for(int i = 1; i < n-1; i++){
		//~ if(isOdd(v[i])&&isOdd(v[i+1])&&(i%2)==0) return true;
	//~ }
	//~ return false;
}

int main(){
	
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	
	cout << (solve(v,n) ? "YES" : "NO") << endl;
	
	return 0;
}
