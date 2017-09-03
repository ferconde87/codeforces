#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> & v){
	for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;	
}

int main(){
	int peaks, k;
	cin >> peaks >> k;
	int n = (2*peaks)+1;
	vector<int> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	for(int i = 1; i < n-1; i+=2){
		if(v[i-1]+1 < v[i] && v[i] > v[i+1]+1){
			v[i]--;k--;
		}
		if(k == 0)break;
	}
	print(v);
}
