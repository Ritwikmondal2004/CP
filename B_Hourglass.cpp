#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int s, k, m;
    cin >> s >> k >> m;

    if (s <= k)
        cout << max(0, s - m % k) << '\n';
    else
        cout << (((m % (2 * k)) < k) ? s - m % k : k - m % k) << '\n';
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
