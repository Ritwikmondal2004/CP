#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n; 
    cin>>n;        
    int mn=101,mx=0;
    int x;
    for (int i=0;i<n;i++) { 
        cin>>x;   
        if (x < mn) mn = x;  
        if (x > mx) mx = x;  
    } 
    int ans = mx - mn - 1;  
    if (ans < 0) ans = 0;   
    cout<<ans<<endl;     
} 
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0; 
    
}