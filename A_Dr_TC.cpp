#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        s[i] = (s[i] == '0') ? '1' : '0';
        
        ll count = 0;
        for (char c : s) {
            if (c == '1') count++;
        }
        
        ans += count;

        s[i] = (s[i] == '0') ? '1' : '0';
    }
    cout << ans << endl;
} 

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0; 
    
}