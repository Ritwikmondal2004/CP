#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int oddSum = 0, evenSum = 0;
        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                oddSum += A[i];
            } else {
                evenSum += A[i]; 
            }
        }
        cout << max(oddSum, evenSum) << endl;

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