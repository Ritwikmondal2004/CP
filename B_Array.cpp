#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        vector<long long>right;
        for(int j=i+1;j<n;j++){
            right.push_back(arr[j]);
        }
        sort(right.begin(),right.end());
        int les=lower_bound(right.begin(), right.end(), arr[i]) - right.begin();
        int great= right.end() - upper_bound(right.begin(), right.end(), arr[i]);
        cout<<max(les,great)<<" ";
    }
    cout<<endl;
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