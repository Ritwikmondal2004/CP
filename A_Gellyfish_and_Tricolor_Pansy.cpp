#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(min(a,c)>=min(b,d)){
    cout<<"Gellyfish"<<endl;
  }
  else{
    cout<<"Flower"<<endl;
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