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
        int l1,r1,l2,r2; cin >> l1 >> r1 >> l2 >> r2;
        int L,R; L = max(l1,l2); R = min(r1,r2);
        if(R<L){
        cout<<1<<endl;
        continue;
    }
 
    int ans = R-L;
    if(l1<L||l2<L)
        ans++;
    if(r1>R||r2>R)
        ans++;
 
    cout<<ans<<endl;
}  
    
}
