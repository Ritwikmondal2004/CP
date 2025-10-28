#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin>>n;
    ll count=0;
    vector<ll>a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    vector<ll>b(n);
    for (ll i = 0; i < n; i++) cin >> b[i];
    ll max_diff = 0;
    for (ll i = 0; i < n; i++) {
        max_diff += max(0LL, a[i] - b[i]);
        
    }
    cout << max_diff + 1 <<endl;
    
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int t;
    cin >> t;
     
    while (t--) {
    	solve();
    	
    }
    return 0; 
    
}