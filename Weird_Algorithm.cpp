#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int n; 
    cin >> n; 
    while (n!=1) {
        // n is even
        if(!(n%2)){
            cout << n << " ";
            n/=2;
        }
        else{
            cout << n << " ";
            n = n*3 + 1;
        }
    }
    cout << "1";
}
