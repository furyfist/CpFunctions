#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int n; cin >> n; 
    vector<int> v(n-1);
    int sum = 0,ans = 0;
    for(int j=0; j<n-1; j++){
        cin >> v[j];
        sum+=v[j];
    }

    for(int i=1; i<=n ;i++){
        ans +=i;
    }
    cout << ans - sum;
}
