#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int can_be_good(const vector<int>& a) {
    unordered_set<int> vals;
    for (int x : a) {
        if (x != -1) {
            vals.insert(x);
        }
    }

    if (vals.empty()) {
        return 1; // equivalent to true
    }
    if (vals.size() > 1) {
        return 0; // equivalent to false
    }

    int k = *vals.begin();
    return (k > 0); // returns 1 if true, 0 if false
}

void solve() {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << (can_be_good(a) ? "YES" : "NO") << '\n';
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
