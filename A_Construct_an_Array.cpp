#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    for (int i= 0;i<n;i++) {
        cout << (2*i+1);
        if (i<n-1) {
            cout << " ";
        }
    }
    cout <<endl;
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