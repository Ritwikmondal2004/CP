#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    vector<int> c(n, INF);
    c[0] = min(a[0], b[0]);
    for (int i = 1; i < n; ++i) {
        if (c[i-1] == INF) break; 

        int mn = min(a[i], b[i]);
        int mx = max(a[i], b[i]);

        if (mn >= c[i-1]) {
            c[i] = mn;
        } else if (mx >= c[i-1]) {
            c[i] = mx;
        } else {
            c[i] = INF;
        }
    }
    vector<int> d(n, -1);
    d[n-1] = max(a[n-1], b[n-1]);

    for (int i = n - 2; i >= 0; i--) {
        if (d[i+1] == -1) break;

        int mn = min(a[i], b[i]);
        int mx = max(a[i], b[i]);

        if (mx <= d[i+1]) {
            d[i] = mx;
        } else if (mn <= d[i+1]) {
            d[i] = mn;
        } else {
            d[i] = -1;
        }
    }

    bool possible = false;
    for (int i = 0; i < n; ++i) {
        int mn = min(a[i], b[i]);
        int mx = max(a[i], b[i]);
        bool reach_top = (i == 0) || (c[i-1] != INF && mn >= c[i-1]);
        bool reach_end = (i == n - 1) || (d[i+1] != -1 && mx <= d[i+1]);

        if (reach_top && reach_end) {
            possible = true;
            break;
        }
        if (mx <= mn) {
            bool reach_top_2 = (i == 0) || (c[i-1] != INF && mx >= c[i-1]);
            bool reach_end_2 = (i == n - 1) || (d[i+1] != -1 && mn <= d[i+1]);
            if (reach_top_2 && reach_end_2) {
                possible = true;
                break;
            }
        }
    }

    if (possible) 
    cout << "Yes" << endl;
    else 
    cout << "No" << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}