#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin >> n;
    map<int,int>mp; // Use map instead of array to avoid out-of-bounds issues
    bool flag = false;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
        if (!flag&&mp[0]>=3&&mp[1]>=1&&mp[2]>=2&&mp[3]>=1&&mp[5]>=1) {
            cout << i + 1 << endl;
            flag = true;
        }
    }

    if (!flag) {
        cout << 0 << endl;
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