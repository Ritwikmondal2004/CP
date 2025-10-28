#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n,m,l,r;
	cin>>n>>m>>l>>r;
	ll diff=(n - m);
	if(abs(l)>=diff){
		cout<<l+diff<<' '<<r<<endl;
	}
	else{
		cout<<0<<" "<<r-l-diff<<endl;
	}
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