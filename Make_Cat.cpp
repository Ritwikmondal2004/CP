#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   string s;
   cin>>s;
   if(s.size() != 3){
       cout << "no" << endl;
       return;
   }
   sort(s.begin(), s.end());
   if(s == "act"){
       cout << "yes" << endl;
   }
   else{
       cout << "no" << endl;
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
