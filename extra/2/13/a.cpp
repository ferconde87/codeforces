#include <iostream>
#include <vector>

#define cn(x) cout << #x << " = " x << endl;

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int k;cin >> k;
        int min; cin >> min;
        int max; cin >> max;
        vector<int> v;
        v.resize(k);
        for(int j = 0; j < k; j++) cin >> v[j];
        if(v[0]==min){
            if(v[k-1]==max){
                cout << "BOTH" << endl;
            }else{
                cout << "EASY" << endl;
            }
        }else{
            if(v[k-1]!=max){
                cout << "OKAY" << endl;
            }else{
                cout << "HARD" << endl;
            }    
        }
    }
}
