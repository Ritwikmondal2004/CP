#include <bits/stdc++.h>
using namespace std;
void solve(){
        int length; 
        string binaryString;
        cin >> length >> binaryString;

        long long minPathSum = 0;

        if (length == 1) {
            minPathSum = (binaryString[0] - '0');
        } else {
            // first element contribution
            minPathSum += 2LL * (binaryString[0] - '0');         
            // last element contribution
            minPathSum += 2LL * (binaryString[length - 1] - '0'); 
            // middle elements contribution
            for (int idx = 1; idx <= length - 2; ++idx) {
                minPathSum += 3LL * (binaryString[idx] - '0');   
            }
        }

        cout << minPathSum << '\n';
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