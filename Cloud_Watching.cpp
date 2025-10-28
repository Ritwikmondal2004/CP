#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){   
    ll a,b;
    cin>>a>>b;
    if(b>=a*3){
        cout<<"Rain"<<endl;
    }
    else{
        cout<<"Dry"<<endl;
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    solve();
    
    return 0; 
    
}