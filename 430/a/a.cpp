#include <algorithm>
#include <cstdlib> //div_t
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define cn(x) cout << #x << " = " << x << endl;

bool solve(){
	long long l,r,x,y;
	double k;
	cin >> l >> r >> x >> y >> k;
	double num = l;
	double den = x;
	while(num <= r && den <= y){
		double ratio = num / den;
		if(k > ratio){
			num++;
		}else if(k < ratio){
			den++;
		}else{
			return true;
		}
	}
	return false;
}

int main(){
	
	cout << (solve() ? "YES" : "NO") << endl;
	
	return 0;
}
