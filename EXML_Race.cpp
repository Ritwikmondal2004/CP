#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    int bestcar=1;
    int bestspeed=-1;
    for(int i=1;i<=n;i++){
        int d,t;
        cin>>d>>t;
        int speed=d/t;

        if(speed>bestspeed){
            bestspeed=speed;
            bestcar=i;
        }
    }
    cout<<bestcar<<endl;

}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}