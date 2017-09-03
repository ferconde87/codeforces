#include <iostream>
#include <vector>

#define cn(x) cout << #x << " = " << x << endl;

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int n;
		cin >> n;
		vector<string> vs(n);
		for(int j = 0; j < n; j++) cin >> vs[j];
		int k = 0;
		for(; k < n; k++){
			if(vs[k][0]!='#')
				break;
		}
		if(k<n){
			for(int j = k+1; j < n; j++) cout << vs[j] << " ";
			cout << vs[k] << " ";
			for(int j = 0; j < k; j++) cout << vs[j] << " ";
			cout << endl;
		}else{
			for(int j = 0; j < n; j++) cout << vs[j] << " ";
			cout << endl;
		}
	}
}
