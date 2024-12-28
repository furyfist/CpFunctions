#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc; 
    cin >> tc; 
    while (tc--) {
        int n; cin >> n;
        int x = n;
        int ans = 1; 
        while (x > 3){
            x/=4;
            ans*=2;
        }
        cout << ans << endl;
    }
}
