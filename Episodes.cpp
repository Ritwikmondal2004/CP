#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,k;
    cin>>n>>k;
    int total_minites=n*k;
    int hours=total_minites/60;
    int minutes=total_minites%60;
    cout<<hours<<" "<<minutes<<endl;

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