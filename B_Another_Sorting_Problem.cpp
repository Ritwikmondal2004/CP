#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    vector<long long> a(n);
    for (ll i = 0; i < n; i++) 
    cin >> a[i];
    vector<long long> h(n);
    h[0] = a[0];
    for (ll i = 1; i < n; i++) {
        h[i] = max(h[i-1], a[i]);
    }
    vector<long long> l(n);
    l[n-1] = a[n-1];
    for (ll i = n - 2; i >= 0; i--) {
        l[i] = min(l[i+1], a[i]);
    }
    vector<bool> m(n, false);
    vector<bool> M(n, false);
    for (ll i = 0; i < n - 1; i++) {
        if (a[i] > l[i+1])
         m[i] = true;
    }
    for (ll i = 1; i < n; i++) {
        if (a[i] < h[i-1]) M[i] = true;
    }
    for (ll i = 0; i < n; i++) {
        if (m[i] && M[i]) {
            cout << "NO"<<endl;
            return;
        }
    }
    long long d = 0;
    for (ll i = 1; i < n; i++) {
        if (h[i-1] > a[i]) {
            d = max(d, h[i-1] - a[i]);
        }
    }
    long long p = -2e18;
    for (ll i = 0; i < n; i++) {
        long long c = 3e18;
        if (!M[i] && a[i] >= p) {
            c = min(c, a[i]);
        }
        if (!m[i] && a[i] + d >= p) {
            c = min(c, a[i] + d);
        }
        if (c == 3e18) {
            cout << "NO"<<endl;
            return;
        }
        p = c;
    }
    cout << "YES"<<endl;
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