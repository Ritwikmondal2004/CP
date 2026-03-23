#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + b[i];
    }

    sort(a.begin(), a.end());

    ll ans = 0;

    for (int k = 1; k <= n; k++)
    {
        ll need = pref[k];
        if (need > n)
            break;

        // Binary search for maximum x
        int left = 0, right = n - 1;
        ll best = 0;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            ll usable = n - mid;

            if (usable >= need)
            {
                best = a[mid];
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        ans = max(ans, best * k);
    }

    cout << ans << "\n";
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
