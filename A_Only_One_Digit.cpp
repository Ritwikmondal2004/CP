#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;
    string str_x = to_string(x); 
    for (int y = 0; y <= 9; y++) {
        string str_y = to_string(y); 
        bool found = false;

        for (char digit_x : str_x) {
            for (char digit_y : str_y) {
                if (digit_x == digit_y) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

     
        if (found) {
            cout << y << endl;
            return;
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