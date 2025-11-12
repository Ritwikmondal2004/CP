#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> p(n), pos(n + 1);
    for (int i = 0; i < n; i++)
        cin >> p[i], pos[p[i]] = i;

    vector<bool> gone(n, false);
    int ans = 0;

    for (int a = n; a >= 1; a--)
    {
        int i = pos[a], l = 0, r = 0;
        for (int j = i - 1; j >= 0; j--)
            if (!gone[j])
                l++;
        for (int j = i + 1; j < n; j++)
            if (!gone[j])
                r++;
        ans += min(l, r);
        gone[i] = true;
    }
    cout << ans <<endl;
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