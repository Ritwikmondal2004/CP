#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];

    }
    if(arr[0]==0&&arr[n-1]==0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
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
