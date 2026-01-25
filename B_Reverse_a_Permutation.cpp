#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>res(n+1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        res[arr[i]]=i;
    }
    int x=0;
    while(x<n&&arr[x]==n-x){
        x++;
    }
    if(x<n){
        int j=res[n-x];
        reverse(arr.begin()+x,arr.begin()+j+1);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<(i+1==n?"\n":" ");
    }

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
