#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int A1, B1, A2, B2;
        cin >> A1 >> B1 >> A2 >> B2;
        
        // Check the invariant: B1 + 5A1 ≡ B2 + 5A2 (mod 6)
        int initial = B1 + 5 * A1;
        int target = B2 + 5 * A2;
        if (initial % 6 != target % 6) {
            cout << "NO" << endl;
            return;
        }
        
        // Check if A2 is achievable (max gold from A1 + silver conversions)
        if (A2 > A1 + B1 / 5) {
            cout << "NO" << endl;
            return;
        }
        
        // Check if z is non-negative
        int z = (initial - target) / 6;
        if (z < 0) {
            cout << "NO" << endl;
            return;
        }
        
        cout << "YES" << endl;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 int t;
 cin>>t;
 while (t--)
 {
    solve();
 }
    	
    
    return 0; 
    
}