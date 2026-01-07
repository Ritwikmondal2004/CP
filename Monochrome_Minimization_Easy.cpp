#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    vector<long long> b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ans = -1;

    for (int i = 1; i < n; i++) {
        long long dx1 = a[i-1] - a[0];
        long long mx1 = a[i-1];
        
        long long dx2 = a[n-1] - a[i]; 
        long long mx2 = a[n-1];

        for (int j = 1; j < m; j++) {
            long long dy1 = b[j-1] - b[0];
            long long my1 = b[j-1];

            long long dy2 = b[m-1] - b[j];
            long long my2 = b[m-1];

            long long cost1 = max({
                dx1 * my1,
                dy1 * mx1,
                dx2 * my2,
                dy2 * mx2
            });

            if (ans == -1 || cost1 < ans) ans = cost1;

            long long cost2 = max({
                dx1 * my2,
                dy2 * mx1,
                dx2 * my1,
                dy1 * mx2
            });

            if (ans == -1 || cost2 < ans) ans = cost2;
        }
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
    while (t--) {
        solve();
    }
    return 0;
}