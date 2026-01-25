#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;

    vector<int> arr(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    c[n - 1] = max(arr[n - 1], b[n - 1]);

    for (int i = n - 2; i >= 0; i--) {
        c[i] = max({arr[i], b[i], c[i + 1]});
    }

    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + c[i];
    }

    while (q--) {
        int r, t;
        cin >> r >> t;
        cout << prefix[t] - prefix[r - 1] <<" ";
    }
    cout<<endl;
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
