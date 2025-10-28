#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
   int n;
   cin>>n;
   int sum=0;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];

   }
   for(int i=0;i<n;i++){
    sum+=arr[i];

   }
   cout<<sum-n+1<<endl;
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