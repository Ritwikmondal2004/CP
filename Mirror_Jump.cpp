#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,k;
    cin>>n>>k;
    if(n==k){
        cout<<0<<endl;
        return;
    }
    int number=n-k;
    int mirror=k;
    int minimum=min(number,mirror);
    cout<<minimum<<endl;
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
