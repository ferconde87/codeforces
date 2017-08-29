#include <bits/stdc++.h>

using namespace std;
 
#define cn(x) cout << #x << " = " << x << endl; 
 
 // (!) Time limit exceeded 
 
inline int read(){
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}

int main(){
	int n=read(); int m=read();
	vector<int> v(n);
	vector<bool> z(n,false);
	for(int i = 0; i < n; i++) cin >> v[i];
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		for(int j = 0; j < n; j++){
			v[j]^=x;
		}
		for(int y : v){
			if(y>n)continue;
			z[y] = true;
		}
		for(int j = 0; j < n; j++){
			if(!z[j]){
				printf("%d\n",j);
				break;
			}
		}
		fill(z.begin(), z.end(), false);
	}
    return 0;
}
