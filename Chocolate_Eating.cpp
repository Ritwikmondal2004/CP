#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int a,b;
    cin>>a>>b;
    int sum=0;
    if(a==b){
        cout<<a+b-1<<endl;
        return;
    }
    cout<<a+b<<endl;

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