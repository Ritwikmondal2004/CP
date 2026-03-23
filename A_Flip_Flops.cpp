#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    long long n,c,k;
    cin>>n>>c>>k;
    vector<long long>arr(n);
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(long long i=0;i<n;i++){
        if(arr[i]>c){
            break;
        }
        else{
           long long x=min(k,c-arr[i]);
            arr[i]+=x;
            k-=x;
            c+=arr[i];
        }
    }
    cout<<c<<endl;
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