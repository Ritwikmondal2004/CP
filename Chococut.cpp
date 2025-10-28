#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int total = n * m;
    int ans = 0;

    if (k == 0) {
        cout << total << endl;
        return 0;
    }

    for (int i = 1; i < m; i++) {
        if (n * i >= k) {
            ans = max(ans, n * (m - i));
        }
    }

    for (int j = 1; j < n; j++) {
        if (m * j >= k) {
            ans = max(ans, m * (n - j));
        }
    }

    cout << ans << endl;
    return 0;
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
