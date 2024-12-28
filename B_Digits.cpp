#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    long long tc; 
    cin >> tc; 
    while (tc--) {
        long long n,d; 
        cin >> n >> d;
        long long sum_digits = n * d;
        
        cout << "1 ";
        if((n >= 3) || (d % 3 == 0)) cout<<"3 ";
        if(d == 5) cout<<"5 ";
        if((d == 7) || (n >= 3)) cout<<"7 ";
        if((n >= 6) || (d == 9) || ((n >= 3) && (d % 3 == 0))) cout<<"9";
        cout<<endl;
    }
}
