#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int N;
    long long X;
    cin >> N >> X;

    bool a = false;
    bool b = false;
    bool c = false;

    for (int i = 0; i < N; i++)
    {
        long long val;
        cin >> val;

        if (val < X)
        {
            a = true;
        }
        else if (val > X)
        {
            b = true;
        }
        else
        {
            c = true;
        }
    }

    if (a && b && !c)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
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