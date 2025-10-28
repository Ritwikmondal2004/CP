#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){   
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int count=0;
    for (int i=n-2;i>=0&&k>0;i--) {
        if(s[i]=='0'&&s[i+1]=='1'){
            s[i]='1';
            k--;
        }
    }  
    for(int i=0;i<n;i++){
       if(s[i]=='1')
        count++;
    }
    cout<<count<<endl;
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