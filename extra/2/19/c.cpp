#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a, b, c;
	int res = 0;
	for(int i = 0; i < n; i++){
		cin >> a >> b >> c;
		if(a + b + c >= 2) res++;
	}
	cout << res << endl;
}
