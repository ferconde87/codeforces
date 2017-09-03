#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>
#include <utility>
#include <cstring>

using namespace std;

int main() {
  string str;
  cin >> str;
  string output;
  for(int i = 0; i< str.size(); i++){
    int ch = tolower(str[i]);
    if (strchr("aeiouy", ch) == NULL) {
      output += '.';
      output += ch;
    }
  }
  cout << output << endl;
  
  return 0;
}
