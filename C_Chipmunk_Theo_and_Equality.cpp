#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

struct S
{
    ll v;
    ll d;
};
vector<S> f(ll a)
{
    vector<S> b;
    ll c = 0;
    while (a > 2)
    {
        b.push_back({a, c++});
        if (a % 2 == 0)
            a /= 2;
        else
            a += 1;
    }
    if (a == 2)
    {
        b.push_back({2, c++});
        b.push_back({1, c++});
    }
    else if (a == 1)
    {
        b.push_back({1, c++});
        b.push_back({2, c++});
    }
    return b;
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<S> b = f(a[0]);
    for (int i = 1; i < n; i++)
    {
        vector<S> c = f(a[i]);
        vector<S> d;
        for (auto &e : b)
        {
            for (auto &g : c)
            {
                if (g.v == e.v)
                {
                    d.push_back({e.v, e.d + g.d});
                    break;
                }
            }
        }
        b = d;
    }
    ll m = -1;
    for (auto &e : b)
    {
        if (m == -1 || e.d < m)
            m = e.d;
    }
    cout << m << endl;
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}