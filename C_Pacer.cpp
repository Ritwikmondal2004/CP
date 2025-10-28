#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
   ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }
        ll total_runs = 0;
        ll k = a[0];
        int start_side = 0;
        int end_side = b[0];
        if (start_side == end_side) {
            total_runs += (k % 2 == 0) ? k : k - 1;
        } else {
            total_runs += (k % 2 == 1) ? k : k - 1;
        }
        for (int i = 0; i < n - 1; i++) {
            k = a[i + 1] - a[i];
            start_side = b[i];
            end_side = b[i + 1];
            if (start_side == end_side) {
                total_runs += (k % 2 == 0) ? k : k - 1;
            } else {
                total_runs += (k % 2 == 1) ? k : k - 1;
            }
        }
        k = m - a[n - 1];
        total_runs += k;
        cout << total_runs << '\n';
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