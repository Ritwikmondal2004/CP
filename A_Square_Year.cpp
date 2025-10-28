#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string s;
    cin>>s;
    int num=stoi(s);
    bool f=false;
    for(int i=0;i<=99;i++){
        int b=num-i*i;
        if(b>=0&&b<=99){
            int sum=i+b;
            if(sum*sum==num){
                cout<<i<<" "<<b<<endl;
                f=true;
                break;
            }
        }
    }
    if(!f){
        cout<<-1<<endl;
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