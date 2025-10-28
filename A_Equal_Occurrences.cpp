#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;
    cin >> n;
    vector<int> ls(n);
    for (int i = 0; i < n; ++i) {
        cin >> ls[i];
    }
    vector<int> a(n, 0);
    for (int x : ls) {
        a[x - 1]++;
    }
    sort(a.begin(), a.end());
    long long s = 0;
    for (int x : a) {
        s += x;
    }
    long long ans = s;
    for (int i = 0; i < n; ++i) {
        ans = min(ans, s - (long long)(n - i) * a[i]);
    }
    cout << n - ans << endl;
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
