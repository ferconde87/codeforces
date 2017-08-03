#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <locale>
#include <utility>

#define cn(x) cout << #x << " = " << (x) << endl;

using namespace std;


int getWidth(vector<vector<char > > & vv, char c, int i, int j, int m){
	int ans = 0;
	for(int k = j; k < m; k++){
		if(vv[i][k]!=c)break;
		ans++;
	}
	return ans;	
}
int getHeight(vector<vector<char > > & vv, char c, int i, int j, int n){
	int ans = 0;
	for(int k = i; k < n; k++){
		if(vv[k][j]!=c){
			break;
		}
		ans++;
	}
	return ans;	
}

bool check(vector<vector<char > > & vv, char c, int ci, int cj, int w, int h){
	for(int i = ci; i < ci+h; i++){
		for(int j = cj; j < cj+w; j++){
			if(vv[i][j]!=c){
				 return false;
			}
		}
	}
	return true;
}

int count(vector<vector<char > > & vv, char c, int ci, int cj, int w, int h){
	int ans = 0;
	for(int i = ci; i < ci+h; i++)
		for(int j = cj; j < cj+w; j++)
			ans++;
	return ans;
}


pair<int, int> findFirst(vector<vector<char > > & vv, char c, int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(vv[i][j]==c){
				 return make_pair(i, j);
			}
		}
	}
	return make_pair(-1, -1);
}

bool solve(vector<vector<char > > & vv, int n, int m){
	char r = 'R';
	char b = 'B';
	char g = 'G';
	
	pair<int, int> rp = findFirst(vv, r, n, m);
	if(rp.first == -1 || rp.second == -1) return false;
	pair<int, int> bp = findFirst(vv, b, n, m);
	if(bp.first == -1 || bp.second == -1) return false;
	pair<int, int> gp = findFirst(vv, g, n, m);
	if(gp.first == -1 || gp.second == -1) return false;
	
	int rw = getWidth(vv, r, rp.first, rp.second, m);
	int rh = getHeight(vv, r, rp.first, rp.second, n);
	if(!check(vv, r, rp.first, rp.second, rw, rh)) return false;
	
	
	int gw = getWidth(vv, g, gp.first, gp.second, m);
	int gh = getHeight(vv, g, gp.first, gp.second, n);
	if(!check(vv, g, gp.first, gp.second, gw, gh)) return false;
	
	int bw = getWidth(vv, b, bp.first, bp.second, m);
	int bh = getHeight(vv, b, bp.first, bp.second, n);
	if(!check(vv, b, bp.first, bp.second, bw, bh)) return false;
	
	if(rw != gw || rw != bw || gw != bw) return false;
	if(rh != gh || rh != bh || gh != bh) return false;
	
	int rn = count(vv, r, rp.first, rp.second, rw, rh);
	int gn = count(vv, g, gp.first, gp.second, gw, gh);
	int bn = count(vv, b, bp.first, bp.second, bw, bh);
	if((rn+gn+bn)!= n*m) return false;
	
	return true;
}


int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<char > > vv(n, vector<char>(m));
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> vv[i][j];

	cout << (solve(vv, n, m) ? "YES" : "NO") << endl;
	
	return 0;
}
