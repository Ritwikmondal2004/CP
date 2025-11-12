#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool si=false;
    int store=0;
    for(char c:s){
        if(c=='0'){
            si=true;
        }
        else if(c=='1'&& si){
            store++;
        }
    }
    cout<<store<<endl;
}
int main()
{
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