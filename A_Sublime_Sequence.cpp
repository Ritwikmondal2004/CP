#include <bits/stdc++.h>
using namespace std;
void solve(){
int x,n;
cin>>x>>n;
    if(n%2==0){
        cout<<0<<endl;
    }
    else{
        cout<<x<<endl;
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