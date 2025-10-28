#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){   
    ll n,c;
    cin>>n>>c;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
        int y = c;
        while (*min_element(a.begin(), a.end()) >= y || count(a.begin(), a.end(), y) > 0) {
            y++;
        }
        cout << (y - c) << endl;
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