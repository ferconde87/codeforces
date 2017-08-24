#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define cn(x) cout << #x << " = " << x << endl;

void print(unordered_set<int> & set){
	cout << set.size() << " ";
	for(auto x : set){
		cout << x+1 << " ";
	}
	cout << endl;
}

void print(vector<bool> & v){
	for(bool x : v) cout << x << " ";
	cout << endl;
}

void print(unordered_map<int, int> & m){
	cout << "print map:" << endl;
	for(auto p : m){
		cout << p.first << " " << p.second << endl;
	}
}

int main(){
	
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
		
	vector<int> w(v);
	sort(w.begin(), w.end());
	unordered_map<int, int> map;
	for(int i = 0; i < n; i++){
		map[w[i]] = i;
	}
	vector<bool> used(n,false);
	unordered_set<int> set;
	vector<unordered_set<int> > ans;
	int count = 0;
	for(int i = 0; i < n; i++){
		if(used[i]) continue;
		set.clear();
		set.insert(i);
		used[i] = true;
		int next = map[v[i]];
		while(true){
			used[next] = true;
			if(set.find(next)!=set.end()){			
				ans.push_back(set);
				break;
			}else{
				set.insert(next);
			}
			int vi = v[next];
			next = map[vi];
		}
	}
	
	cout << ans.size() << endl;
	for(auto x : ans){
		print(x);
	}
	
	return 0;
}
