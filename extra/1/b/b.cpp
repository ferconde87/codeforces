#include <iostream>

using namespace std;


int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int a = 0;
	int d = 0;
	for(char c : s){
		if(c=='A')a++;
		if(c=='D')d++;
	}
	if(a==d)
		cout << "Friendship" << endl;
	else if(a < d)
		cout << "Danik" << endl;
	else
		cout << "Anton" << endl;
}
