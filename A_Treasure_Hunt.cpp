#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
 int x,y,a;
 cin>>x>>y>>a;
 a=a%(x+y);
 if(a<x){
    cout<<"no"<<endl;
 }
 else{
    cout<<"yes"<<endl;
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