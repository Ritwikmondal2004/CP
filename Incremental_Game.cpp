#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    int a, b, c;
    cin >> a >> b >> c;

    bool win = false;

    for (int s = 1; s <= c; ++s) {
        if (s <= a) {
            int rem_a = a - s;
            int val_b = b;
            if (rem_a <= s && val_b <= s) {
                win = true;
                break;
            }
        }

        if (s <= b) {
            int rem_b = b - s;
            int val_a = a;
            if (rem_b <= s && val_a <= s) {
                win = true;
                break;
            }
        }
    }

    if (win) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }
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
