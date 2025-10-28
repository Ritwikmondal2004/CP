#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int min_cost = INT_MAX;
        // Try all pairs (i, j)
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j) continue; // Must be different vases
                // Try buying i first
                int cost1 = A[i];
                int cost2 = A[j];
                if (j == i + 1) { // If j is next to i, apply discount
                    cost2 /= 2;
                }
                min_cost = min(min_cost, cost1 + cost2);
                
                // Try buying j first (only if order matters)
                cost1 = A[i];
                cost2 = A[j];
                if (i == j + 1) { // If i is next to j, apply discount
                    cost1 /= 2;
                }
                min_cost = min(min_cost, cost1 + cost2);
            }
        }
        
        cout << min_cost << endl;
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