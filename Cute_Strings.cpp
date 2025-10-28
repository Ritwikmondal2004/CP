#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string s;
    cin>>s;
    if(s[0]==s[2]&&s[1]=='w'){
        cout<<"Cute"<<endl;
    }
    else{
        cout<<"No"<<endl;
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
