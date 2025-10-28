#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    int result=0;
    int lower=n-n%3;
    int upper=n+(3-n%3);
    if (result==0) {
        result = n;
    }
    if(abs(n-lower)<=abs(n-upper)){
        result=lower;
    }
    else{
        result=upper;
    }
    cout<<result<<endl;
} 

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    	solve();
    
    return 0; 
    
}