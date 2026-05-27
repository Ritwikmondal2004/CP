#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> pos1, pos2;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '1')
            pos1.push_back(i);
        if (s2[i] == '1')
            pos2.push_back(i);
    }
    if (pos1.size() != pos2.size())
    {
        cout << -1 << endl;
        return;
    }
    int minimum_op = 0;
    for (size_t i = 0; i < pos1.size(); i++)
    {
        if (pos1[i] != pos2[i])
        {
            minimum_op++;
        }
    }

    cout << minimum_op << endl;
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