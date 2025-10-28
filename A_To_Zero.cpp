#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    if(n%2==1){
        n-=k;
        ans++;
        
    }

    ans+=n/(k-1);
    if(n%(k-1))
    ans++;
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