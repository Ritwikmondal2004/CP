#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    int mini = 101;
    int countmini = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] < mini)
        {
            mini = arr[i];
            countmini = 1;
        }
        else if (arr[i] == mini)
        {
            countmini++;
        }
    }
    if (countmini >= 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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