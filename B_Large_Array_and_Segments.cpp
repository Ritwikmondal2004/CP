#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){   
    int n; 
    ll k, x; 
    cin >> n >> k >> x; 

    vector<ll> a(n); 
    for (int i = 0; i < n; i++) cin >> a[i]; 

    vector<ll> pre(n + 1, 0); 
    for (int i = 0; i < n; i++) pre[i + 1] = pre[i] + a[i]; 

    ll T = pre[n]; 
    vector<ll> Larr(n, 0); 

    for (int i = 0; i < n; i++) { 
        ll rem = pre[n] - pre[i]; 

        if (rem >= x) { 
            int lo = i + 1, hi = n, ans = n; 
            while (lo <= hi) { 
                int mid = (lo + hi) / 2; 
                if (pre[mid] - pre[i] >= x) { 
                    ans = mid; 
                    hi = mid - 1; 
                } else { 
                    lo = mid + 1; 
                } 
            } 
            Larr[i] = ans - i; 
        } else { 
            ll needed = x - rem; 
            ll cycles = (needed + T - 1) / T; 
            ll base = (n - i) + (cycles - 1) * (ll)n; 
            ll req = x - ((pre[n] - pre[i]) + (cycles - 1) * T); 
            int j = lower_bound(pre.begin(), pre.end(), req) - pre.begin(); 
            Larr[i] = base + j; 
        } 
    } 

    ll ans = 0; 
    for (int i = 0; i < n; i++) { 
        ll L = Larr[i]; 
        ll maxVal = k * (ll)n - i - L; 
        if (maxVal < 0) continue; 
        ll maxJ = maxVal / n; 
        if (maxJ >= k) maxJ = k - 1; 
        ans += (maxJ + 1); 
    } 
     
    cout << ans << "\n"; 
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