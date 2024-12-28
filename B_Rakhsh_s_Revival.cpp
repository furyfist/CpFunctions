#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--) {
        int n, m, k; 
        cin >> n >> m >> k;
        string s; 
        cin >> s;
        
        int sum = 0, ans = 0, temp = 0;
        vector<int> v(n);
        
        for(int i = 0; i < n; i++) {
            v[i] = s[i] - '0';
        }
        
        int j = 0; 
        while(j < n) {
            if(temp > 0) {
                temp--;
                j++;
                continue;
            }
            
            if(v[j] == 1) {
                sum = 0;
            } else {
                sum++;
                if(sum == m) {
                    ans++;
                    sum = 0;
                    temp = k - 1;
                }
            }
            j++;
        }
        cout << ans << endl;
    }
}
