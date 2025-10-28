#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int alice = 0, bob = 0;
    for (char c : s) {
    if (c == '0') alice++; // count '0'
        else bob++;            // count '1'
    }

    if (n % 2 == 0 && alice <= n / 2 && bob <= n / 2) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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
