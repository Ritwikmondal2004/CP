#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool dp[3] = {false, false, false};

    for (int i = 0; i < N; i++) {
        bool next[3];
        for (int j = 0; j < 3; j++) {
            next[j] = dp[j];
        }

        int rem = A[i] % 3;
        next[rem] = true;

        for (int j = 0; j < 3; j++) {
            if (dp[j]) {
                next[(j + rem) % 3] = true;
            }
        }

        for (int j = 0; j < 3; j++) {
            dp[j] = next[j];
        }
    }

    if (dp[0]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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
