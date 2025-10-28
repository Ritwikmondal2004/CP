#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){   
    ll n, x;
    cin >> n >> x;
    if (n == 1) {
        if (x == 0)
            cout << "-1"<<endl;
        else
            cout << x <<endl;
        return;
    }
    ll y = __builtin_popcount(x);
    if (y > n) {
        cout <<x<<endl;
        return;
    }
    ll ans = x + (n - y);
    if ((n - y) % 2) {
        if (x == 0 || x == 1)
            ans += 3;
        else
            ans++;
    }
    cout << ans << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0; 
}