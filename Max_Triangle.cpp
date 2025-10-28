#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin>>n;
    if (n<=3) {
        cout<<-1<<endl;
    } else {
       ll a=n;
       ll  b=n-1;
       ll c=n-2;
        cout << a + b + c << endl;
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