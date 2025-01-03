// How to convert a string to a number. -> use the func Stoi("input string");

/*
    NOTES : 
    1. Not able to get the logic of : (sum + x * 2 + y * 6) % 9 == 0
    2. if(flag) break; -> breaking from the 2 for loops.
    3. cout << (flag ? "YES" : "NO") << endl; -> Clean code, implement in future questions.
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
        string s; 
        cin >> s;
        int n = s.size();
        int cnt2 = 0, cnt3 = 0, sum = 0;

        for(auto c : s) {
            sum += (c - '0');
            if(c == '2') cnt2++;
            if(c == '3') cnt3++;
        }

        bool flag = false;
        for(int x = 0; x <= cnt2 ; x++) {
            for(int y = 0; y <= cnt3 ; y++) {
                if((sum + x * 2 + y * 6) % 9 == 0) {
                    flag = true;
                    break;
                }
            }
            if(flag) break; 
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
}
