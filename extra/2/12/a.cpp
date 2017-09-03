#include <iostream>
#include <vector>

#define cn(x) cout << #x << " = " x << endl;

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;cin >> n;
        int k; cin >> k;
        vector<int> v;
        v.resize(n);
        for(int j = 0; j < n; j++) cin >> v[j];
        int res = 0;
        for(int j = 0; j < n; j++){
            res += v[j]/k;
        }
        cout << res << endl;
    }
}
