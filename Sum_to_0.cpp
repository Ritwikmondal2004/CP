#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n; 
    cin>>n;
    if(n % 2 == 0){
        int cnt = 1;
        for(int i = 1; i <= n; i++){
            if(cnt & 1) cout<<2<<" ";
            else cout<<-2<<" ";
            cnt++;
        }
    }
    else{
        if(n > 1){
            cout<<1<<" "<<2<<" "<<-3<<" ";
            int cnt = 1;
            for(int i = 4; i <= n; i++){
                if(cnt & 1) cout<<2<<" ";
                else cout<<-2<<" ";
                cnt++;
            }
        }
        else cout<<-1;
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