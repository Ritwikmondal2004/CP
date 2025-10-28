#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f=-1;
    int l=-1;
    for (int i=0;i<n;i++){
        if (s[i]=='1'){
            if(f==-1){
                f=i;
            }
            l=i;
        }
    }
    if (f==-1) {
        cout << 0 << endl;
        return;
    }
    int chan=0;
    for (int i=f;i<=l;i++){
        if (s[i]=='0'){
            chan++;
        }
    }
    cout <<chan<<endl;
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