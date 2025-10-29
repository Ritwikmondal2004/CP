#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<pair<int, int>> b(n);
    for (int i = 0; i < n; i++)
        b[i] = {a[i], i};

    sort(b.begin(), b.end());

    vector<long long> ans(n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            ans[b[i].second] = -1;
        }
        else
        {
            long long L = (long long)(b[i - 1].first + b[i].first) / 2;
            long long U = (long long)(b[i].first + b[i + 1].first) / 2;
            ans[b[i].second] = U - L;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
        if (i < n - 1)
            cout << ' ';
    }
    cout <<endl;
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