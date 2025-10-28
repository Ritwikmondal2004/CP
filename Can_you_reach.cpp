#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    vector<int> leftReach(n, 0), rightReach(n, 0);

    for (int i = 1; i < n; i++) {
        if (i == 1 || (heights[i] - heights[i - 1]) != (heights[i - 1] - heights[i - 2])) {
            leftReach[i] = i - 1;
        } else {
            leftReach[i] = leftReach[i - 1];
        }
    }

    rightReach[n - 1] = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        if (i == n - 2 || (heights[i + 1] - heights[i]) != (heights[i + 2] - heights[i + 1])) {
            rightReach[i] = i + 1;
        } else {
            rightReach[i] = rightReach[i + 1];
        }
    }

    vector<pair<int, int>> intervals;
    for (int i = 0; i < n; i++) {
        intervals.emplace_back(leftReach[i], rightReach[i]);
    }

    sort(intervals.begin(), intervals.end());

    auto lowerBound = [&](int key) -> int {
        int lo = 0, hi = n;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (intervals[mid].first > key) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        return lo;
    };

    ll nonIntersectingPairs = 0;
    for (int i = 0; i < n; i++) {
        int idx = lowerBound(intervals[i].second);
        nonIntersectingPairs += (n - idx);
    }

    ll totalPairs = static_cast<ll>(n) * (n - 1) / 2;
    ll friendships = totalPairs - nonIntersectingPairs;
    cout << friendships << "\n";

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
