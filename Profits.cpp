#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,x;
    cin>>n>>x;
    int check=0;
    for(int i=1;i<=n;i++){
        if(i>=x){
            check+=(i-x);
        }
    }
    cout<<check<<endl;

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