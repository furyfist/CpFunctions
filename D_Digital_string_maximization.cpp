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
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        int n = s.size();

        while(n--){
            for(int i=0; i<n; i++){
                if(s[i+1] - s[i] > 1 && s[i+1]!=0 ){ 
                    s[i+1] -=1;
                    swap(s[i],s[i+1]);
                }
            }
            
        }
        // tc = O(n^2);
        cout<< s << endl;
    }
}
