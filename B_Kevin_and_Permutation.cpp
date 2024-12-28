#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
        int n,k; cin >> n >> k;
        int total_k = n/k;
        int start = 1, end = n;
        vector<int> v(n+1);
        for(int i=1; i<=n ;i++){
            if(i%k == 0){
                v[i] = start; start ++; 
            } else {
                v[i] = end; end--;
            }
        }
        for(int x =1; x<=n; x++){
            cout << v[x] << " ";
        }
        cout << endl;
    }
}