#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;
    cin>>n;
    bool odd = false, even = false;
    for(int i=0;i<n;i++) {
        int a; 
        cin>>a;
        if(a==1){
            if((i+1)%2==0) 
            even=true;
            else 
            odd=true;
        }
    }
    if(odd && even==false){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
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
