#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int N;
    cin >> N;

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
            count1++;
        else if (a == 2)
            count2++;
        else if (a == 3)
            count3++;
    }

    int deletions = min(count1, count3);

    if (count2 > 1)
    {
        deletions += (count2 - 1);
    }

    cout << deletions << endl;
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