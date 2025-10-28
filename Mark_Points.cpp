#include <bits/stdc++.h>
using namespace std;
void solve(){
    int N;
        string S;
        cin >> N >> S;

        bool possible = true;
        int i = 0;

        while (i < N) {
            if (S[i] == '1') {
                int j = i;
                while (j < N && S[j] == '1') {
                    j++;
                }
                int len = j - i; // length of this block of 1s
                if (len < 3) {
                    possible = false;
                    break;
                }
                i = j; // jump past this block
            } else {
                i++;
            }
        }

        cout << (possible ? "Yes" : "No") << endl;
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