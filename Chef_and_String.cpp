#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    long long a, b;
    cin >> a >> b;
    string c;
    cin >> c;

    bool all_i = true;
    for (char ch : c)
    {
        if (ch != 'I')
        {
            all_i = false;
            break;
        }
    }

    if (all_i)
    {
        cout << (a * b) - 1 << endl;
        return;
    }

    vector<int> d;
    for (int i = 0; i < a; i++)
    {
        if (c[i] != 'I')
        {
            d.push_back(i);
        }
    }

    long long e = 0;

    long long internal = 0;
    for (size_t i = 0; i < d.size() - 1; i++)
    {
        internal += (d[i + 1] - d[i] - 1);
        if (c[d[i]] == c[d[i + 1]])
        {
            internal++;
        }
    }
    e += internal * b;

    if (b > 1)
    {
        long long bound = (a - 1 - d.back()) + d.front();
        if (c[d.back()] == c[d.front()])
        {
            bound++;
        }
        e += bound * (b - 1);
    }

    e += d.front();
    e += (a - 1 - d.back());

    cout << e << endl;
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