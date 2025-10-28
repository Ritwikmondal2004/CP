#include <bits/stdc++.h>
using namespace std;
void solve(){
long long n, a, b;
    cin >> n >> a >> b;
    if (a <= b) {
        if (n % 2 == b % 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else { // Added closing brace before else
        if (n % 2 == b % 2 && n % 2 == a % 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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