#include <iostream>
#include <vector>

#define cn(x) cout << #x << " = " x << endl;

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		string s;
		cin >> s;
		int n = s.size();
		int j = 0;
		int count = 0;
		for(; j < n; j++){
			if(s[j]=='n'){
				count++;
				break;
			}
		}
		for(; j < n; j++){
			if(s[j]=='a'){
				count++;
				break;
			}
		}
		for(; j < n; j++){
			if(s[j]=='d'){
				count++;
				break;
			}
		}
		for(; j < n; j++){
			if(s[j]=='i'){
				count++;
				break;
			}
		}
		for(; j < n; j++){
			if(s[j]=='a'){
				count++;
				break;
			}
		}
		cout << ((count == 5) ? "YES" : "NO") << endl;
	}
}
