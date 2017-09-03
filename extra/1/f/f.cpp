#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
	
	unordered_map<char, int> map;
	map['A'] = 0;
	map['B'] = 0;
	map['C'] = 0;
	
	for(int i = 0; i < 3; i++){
		string s;
		cin >> s;
		if(s[1]=='>'){
			map[s[0]]++;
		}else{
			map[s[2]]++;
		}
	}
	
	int a = map['A'];
	int b = map['B'];
	int c = map['C'];
	
	if(a==b && b == c){
		cout << "Impossible" << endl;
		return 0;
	}
	
	if(a < b && a < c){
		if(b < c){
			cout << "ABC" << endl;
		}else{
			cout << "ACB" << endl;
		}
	}if(b < a && b < c){
		if(a < c){
			cout << "BAC" << endl;
		}else{
			cout << "BCA" << endl;
		}
	}if(c < a && c < b){
		if(a < b){
			cout << "CAB" << endl;
		}else{
			cout << "CBA" << endl;
		}
	}

}
