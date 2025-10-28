#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    int minus=0;
    int zero=0;
    int ans=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    if(arr[i]==-1){
        minus++;
    }
    else if(arr[i]==0){
        zero++;
    }
    if(minus%2!=0){
        ans+=2;
    }
    ans+=zero;
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