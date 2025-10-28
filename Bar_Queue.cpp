#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int boy = 0, girl = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B')
            boy++;
        else if (s[i] == 'G')
            girl++;

        count++;

        if (boy > 2 * girl) {
            break;
        }
    }

    printf("%d\n", count);
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