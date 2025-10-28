#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n,m,p,q;
    cin>>n>>m>>p>>q;
    if(n%p==0){
        if((m==((n/p)*q))){
        cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    else
    cout<<"yes"<<endl;
    
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
        solve();/* code */
    }
    return 0; 
    
}