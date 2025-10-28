#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end(), greater<ll>());
    ll count=0;
    ll st=1;
    for(ll i=0;i<n;i++){
        if(arr[i]*st>=x){
            count++;
            st=1;
        }
        else st++;
    }
    cout<<count<<endl;

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