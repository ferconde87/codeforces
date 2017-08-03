#include <algorithm>
#include <iostream>
#include <string>
#include <locale>
#include <vector>

using namespace std;

int main(){

	int n;
	cin >> n;
	string s;
	cin.ignore();
	getline(cin, s);
	int ans = 0;
	int count = 0;
	for(char c : s){
		if(c == ' '){
			ans = max(ans, count);
			count = 0;
		}else{
			if(isupper(c)) count++;
		}
	}
	ans = max(ans, count);
	cout << ans << endl;
	return 0;
}
