#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int result=INT_MAX;
    for(int i=0;i<n;i++){
        result=min(result,max(arr[i],arr[i+1]));
    }
    cout<<result<<endl;
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
