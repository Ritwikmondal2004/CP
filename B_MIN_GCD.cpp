#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){   
    ll n;
    cin >> n;
    ll g=0;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int minimum =min_element(arr.begin(),arr.end())-arr.begin();
    ll m=0;
    for(ll i = 0; i < n; i++){
        if(i!=minimum&&arr[i]%arr[minimum]==0){
        g = __gcd(g,arr[i]);
        }
        
    }
    
    if(g == arr[minimum]){
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0; 
}