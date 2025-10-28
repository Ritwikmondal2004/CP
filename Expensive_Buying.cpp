#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    int sum=0;
    vector<int> c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    sort(c.begin(),c.end(),greater<int>());
    for(int i=0;i<k;i++){
        sum+=c[i];
        
    }
    cout<<sum<<endl;
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