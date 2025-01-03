/*
    NOTES : 
    1. Able to get the logic but not able to implement.
*/
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        bool flag = 1;
        vector<int> v(n+1,0);
        for(int l=1; l<=n; l++){
            cin >> v[l];
        }

        for(int i=1; i<=n; i++){
            if(v[i] != i){
                if((v[i+1] == i && v[i] == i+1) || (v[i+1] == i && v[i] == i+1) ){
                    swap (v[i+1],v[i]);
                } else{
                    flag = 0;
                    break;
                }
            }

        }
        flag ? cout << "YES" : cout << "NO";
        cout << endl;

    }    
}
