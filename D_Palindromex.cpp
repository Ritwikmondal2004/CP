#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n;
    cin >> n;
    int len = 2 * n;
    vector<int> a(len);
    int p1 = -1, p2 = -1;
    for (int i = 0; i < len; ++i) {
        cin >> a[i];
        if (a[i] == 0) {
            if (p1 == -1) p1 = i;
            else p2 = i;
        }
    }
    vector<pair<int, int>> centers = {
        {p1, p1},
        {p2, p2},
        {(p1 + p2) / 2, (p1 + p2 + 1) / 2}
    };
    
    int max_mex = 0;
    
    for (auto& center : centers) {
        int l = center.first;
        int r = center.second;
        while (l >= 0 && r < len && a[l] == a[r]) {
            l--;
            r++;
        }
        vector<bool> present(n + 1, false);
        for (int i = l + 1; i <= r - 1; ++i) {
            if (a[i] <= n) {
                present[a[i]] = true;
            }
        }
        
        int current_mex = 0;
        while (present[current_mex]) {
            current_mex++;
        }
        max_mex = max(max_mex, current_mex);
    }
    cout << max_mex <<endl;
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