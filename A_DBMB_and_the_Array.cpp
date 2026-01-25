#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,s,x;
    cin>>n>>s>>x;
    int sum=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int r=s-sum;
    cout<<(r>=0&&r%x==0?"yes":"no")<<endl;

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
