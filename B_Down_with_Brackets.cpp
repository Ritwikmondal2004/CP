#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string s;
    cin>>s;
    map<int,int>mp;
    int b=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            b++;
        }
        else{
            b--;
        }
        if(i>0&&i<s.size()-1&&b==0){
            cout<<"yes"<<endl;
            return;
        }
    }
    cout<<"no"<<endl;
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