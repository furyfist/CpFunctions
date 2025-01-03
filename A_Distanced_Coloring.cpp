#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--) {
        int n,m,k; cin >> n>>m >> k;
        cout << min(n,m) * min (n,k) << endl;
    }
}
