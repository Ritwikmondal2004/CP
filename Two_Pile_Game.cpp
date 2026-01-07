#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,y;
    cin>>x>>y;
    if(x%2==0){
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
