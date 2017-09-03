#include <iostream>
#include <vector>

#define cn(x) cout << #x << " = " x << endl;

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int k;cin >> k;
		vector<int> v;
		v.resize(k);
		for(int j = 0; j < k; j++) cin >> v[j];
		int sum = 0;
		for(int j = 0; j < k; j++){
			sum += v[j];
		}
		cout << "Case " << i+1 << ": " << sum << endl;
	}
}
