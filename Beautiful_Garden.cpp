#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int a, b, c; // totalFlowers -> a, minBlooming -> b, totalDays -> c
    cin >> a >> b >> c;

    vector<int> d(a); // regrowDays -> d
    for (int i = 0; i < a; ++i)
        cin >> d[i];

    vector<int> e(a, 1); // isBlooming -> e
    vector<int> f(a, 0); // nextBloomDay -> f
    int g = 0;           // totalPlucks -> g

    for (int h = 1; h <= c; ++h) { // day -> h
        for (int i = 0; i < a; ++i) {
            if (!e[i] && f[i] == h) {
                e[i] = 1;
            }
        }

        int j = count(e.begin(), e.end(), 1); // bloomingNow -> j
        int k = j - b;                        // flowersToPluck -> k
        if (k <= 0) continue;

        vector<pair<int, int>> l; // bloomList -> l
        for (int i = 0; i < a; ++i) {
            if (e[i]) {
                l.push_back({d[i], i});
            }
        }

        sort(l.begin(), l.end());

        for (int i = 0; i < min(k, (int)l.size()); ++i) {
            int m = l[i].second; // flowerIndex -> m
            e[m] = 0;
            f[m] = h + d[m];
            g++;
        }
    }

    cout << g << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}