#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        int a,b,d; 
        cin >> a >> b; 
        d = a^b;
        cout << d << endl;
    }
}
