#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int maximum_frequency = 0;
    int current_frequency = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            current_frequency++;
        }
        else
        {
            maximum_frequency = max(maximum_frequency, current_frequency);
            current_frequency = 1;
        }
    }
    maximum_frequency = max(maximum_frequency, current_frequency);
    cout << n - maximum_frequency + 1 << endl;
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