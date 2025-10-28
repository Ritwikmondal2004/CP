#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int ans=n;
    for(int i=0;i<n;i++){
        if(i+1<n && arr[i]==arr[i+1]){
            continue;
        }
        int sur=n-(i+1);
        int time=arr[i]+sur;
        ans=min(ans,time);
    }
    cout<<ans<<endl;
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
