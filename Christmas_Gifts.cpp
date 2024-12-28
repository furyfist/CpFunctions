#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
    int tc; cin>>tc;
    while(tc--){
        int h,l,w; cin >> h >> l >> w;
        int total_area = 2*(l*w + w*h + l*h);
        int ans = 1000/total_area;
        cout << ans << endl; 
    }
    
}
