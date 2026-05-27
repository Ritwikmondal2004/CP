#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin >> n;

        string s;
        cin >> s;

        int count1= 0, count2 = 0;

        for (char ch : s) {
            if (ch == 'a'){
                count1++;
            }
            else{
                count2++;
            }
        }

    cout <<count1<<" "<< count2<<endl;

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