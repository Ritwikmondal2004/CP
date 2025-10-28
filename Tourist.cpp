#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    int minimum=INT_MAX;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        int dist=abs(a-x)+abs(b-y);
        minimum=min(minimum,dist);



    }
    cout<<minimum<<endl;
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