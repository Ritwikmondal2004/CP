#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int maximum_people=max(200,100*n);
    cout<<maximum_people<<endl;
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