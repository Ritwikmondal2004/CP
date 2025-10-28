#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int x,y;
    cin>>x>>y;
    int t=(x+y)/3;
    int ti=min(y,t);
    int ans=ti+t;
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
