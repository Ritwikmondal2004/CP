#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){   
    int n;
    cin>>n;
    if(n%2==0){
        cout<<-1<<endl;
        return;
    }
    else
    cout<<n;
    for(int i=1;i<n;i++){
        cout<<" "<<i;
    }
    cout<<endl;
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