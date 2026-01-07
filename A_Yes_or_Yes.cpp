#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string s;
    cin>>s;
    int y=count(s.begin(),s.end(),'Y');
    if(y>1){
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
 cin>>t;
    while(t--){
    	solve();
    }
    return 0; 
    
}