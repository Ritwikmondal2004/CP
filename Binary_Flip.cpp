#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    if (!(cin >> n))
        return;
    string s;
    cin >> s;

    int c0 = 0, c1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' && s[i + 1] == '0')
            c0++;
        else if (s[i] == '1' && s[i + 1] == '1')
            c1++;
    }

    if (c1 >= c0)
    {
        cout << 0 << "\n";
        return;
    }

    int k = c0 - c1;
    int mz = 0;
    for (int i = 1; i < n - 1; i++)
        if (s[i] == '0')
            mz++;

    int fn = (k + 1) / 2;
    int f1 = min(mz, fn);
    int kr = k - 2 * f1;
    int f2 = max(0, kr);

    cout << (f1 + f2) << "\n";
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