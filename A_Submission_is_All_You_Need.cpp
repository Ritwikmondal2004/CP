#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){   
   int n;
   cin>>n;
   int count=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        count+=max(x,1);
    }
    cout<<count<<endl;
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