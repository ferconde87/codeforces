#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define cn(x) cout << #x << " = " << x << endl;

void print(vector<int> a){
	for(int x : a)
		cout << x;
	cout << endl;
}

int solve(){
	int r, c;
	cin >> r >> c;
	int k;
	cin >> k;
	int res = 0;
	for(int i = 0; i < k; i++){
		int x, y, ri;
		cin >> x >> y >> ri;
		double d = sqrt((x*x)+(y*y));
		if(!(d <= r && d >= (r-c))) continue;
		if(d+ri <= r && d-ri >= (r-c)) res++;
	}
	return res;
}

int main(){
	
	cout << solve() << endl;
	return 0;
}
