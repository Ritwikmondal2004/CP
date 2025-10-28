#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%3==0){
        cout<<"1 2"<<endl;
    }
    else{
        cout<<"0 0"<<endl;
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