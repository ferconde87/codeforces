#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, h;
	cin >> n >> h;
	vector<int> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	int res = 0;
	for(int x : v){
		if(x > h)
			res+=2;
		else
			res++;
	}
	cout << res << endl;
}
