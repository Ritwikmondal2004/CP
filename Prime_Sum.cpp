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
    int sum=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(prime(arr[i]+arr[j])){
                count++;
            }
        }
    }
    cout<<count<<endl;
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