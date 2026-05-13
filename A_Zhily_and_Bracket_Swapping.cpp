#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int pa = 0;
    int pb = 0; 
    bool possible = true;

    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i]) {
            if (a[i] == '(') {
                pa++;
                pb++;
            } else {
                pa--;
                pb--;
            }
        } else {
            if (pa < pb) {
                pa++;
                pb--;
            } else {
                pa--;
                pb++;
            }
        }
        if (pa < 0 || pb < 0) {
            possible = false;
            break;
        }
    }
    if (possible && pa == 0 && pb == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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