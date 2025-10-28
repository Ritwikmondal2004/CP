#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,k;
    string s;
    cin>>n>>k>>s;
    int a=count(s.begin(),s.end(),'0');
    int minus=n/2;
    int b=minus-k;
    if(b<0||a<b||(n-a)<b||(a-b)%2)
    cout<<"no"<<endl;
    else
    cout<<"yes"<<endl;

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