#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin>>n;
    bool a=false;
    for(ll i=0;i<n-1;i++){
        if(a){
            cout<<3<<" ";
        }
        else{
            cout<<-1<<" ";
        }
        a=!a;
    }
    if(a){
    cout<<2<<endl;
    }
    else{
    cout<<-1<<endl;
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