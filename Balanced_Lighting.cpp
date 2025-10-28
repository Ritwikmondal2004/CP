#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){   
    int n;
	    cin>>n;
	    int c0=0;
        int c1=0;
        int c2=0;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        if(a==1)
	        c1++;
	        else if(a==2)
	        c2++;
	        else
	        c0++;
	    }
	    if(n%2!=0)
	    cout<<"No"<<endl;
	    else if(c1>(n/2) || c2>(n/2))
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;
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