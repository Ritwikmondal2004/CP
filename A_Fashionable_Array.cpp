#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   int first=0,last=0;
   for(int i=0;i<n;i++){
    if(first==0 && (arr[i]%2)!=arr[0]%2){
        first=i;
    }
    if((arr[i]%2)!=arr[n-1]%2){
        last=i;
    }
   }
   if((arr[0]+arr[n-1])%2){
    cout<<min(first,n-last-1)<<endl;
   }
   else{
    cout<<0<<endl;
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