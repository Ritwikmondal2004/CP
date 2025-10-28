#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int r,b,p,q;
    cin>>r>>b>>p>>q;
    int red=r*p;
    int blue=b*q;
    cout<<max(red,blue)<<endl;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    	solve();
    	
    return 0; 
    
}