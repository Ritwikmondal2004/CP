#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){   
    int n,x;
    cin>>n>>x;
    int total_water=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total_water+=arr[i];
    }
    int min_bottle=(total_water+x-1)/x;
    cout<<min_bottle<<endl;
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