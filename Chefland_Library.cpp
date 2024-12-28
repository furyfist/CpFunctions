#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
    int tc; cin>>tc;
    while(tc--){
        int n; cin >> n; int sum=0;
        vector<int> a(n+1),v(n+1,0);
        for(int k=1 ; k<=n; k++){
            cin >> a[k];
        }
        for(int i=1; i<=n; i++){
            v[a[i]] = i;
        }
        for(int j=1; j<=n; j++){
            sum+=v[j];
        }
        cout << sum << endl;
    }
    
}