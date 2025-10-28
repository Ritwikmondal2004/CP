#include <bits/stdc++.h>
using namespace std;
bool prime(int x){
    if(x<2) 
    return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
void solve() {
    int n;
    cin>>n;
    int minimum;
    if(n==2){
        minimum=0;
    }
    else{
        minimum=n-2;
    }
    int maximum=(n-1)*(n-2)/2;
    cout<<minimum<<" "<<maximum<<endl;

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