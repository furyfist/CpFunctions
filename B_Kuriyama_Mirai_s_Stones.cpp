/*
    NOTES :
    1.
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> v(n), u(n);
    vector<int> pre_v(n), pre_u(n);
    
    for (int k = 0; k < n; k++) {
        cin >> v[k];
        u[k] = v[k];
    }
    sort(u.begin(), u.end());

    
    pre_v[0] = v[0];
    pre_u[0] = u[0];
    for (int i = 1; i < n; i++) {
        pre_v[i] = pre_v[i - 1] + v[i];
        pre_u[i] = pre_u[i - 1] + u[i];
    }

    int m; cin >> m;
    while (m--) {
        int type, l, r; 
        cin >> type >> l >> r;
        if (type == 1) {
            cout << pre_v[r - 1] - (l > 1 ? pre_v[l - 2] : 0) << endl;
        } else {
            cout << pre_u[r - 1] - (l > 1 ? pre_u[l - 2] : 0) << endl;
        }
    }
}
