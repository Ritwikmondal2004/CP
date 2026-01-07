#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll clamp_val(ll v, ll lo, ll hi) {
    if (v < lo) return lo;
    if (v > hi) return hi;
    return v;
}

bool feasible(ll tot, ll L, ll R, ll b) {
    if (tot == 0) return true;

    ll lo = max(0LL, tot - R);
    ll hi = min(L, tot);
    if (lo > hi) return false;

    auto days = [&](ll x) -> ll {
        ll y = tot - x;
        ll mx = max(x, y);
        return tot + mx - 1;
    };

    ll x1 = clamp_val(tot / 2, lo, hi);
    ll x2 = clamp_val((tot + 1) / 2, lo, hi);

    ll best = min(days(x1), days(x2));
    return best <= b;
}

ll solve_one(ll a, ll b, ll c) {
    ll L = c - 1;
    ll R = a - c;

    ll lo = 0, hi = L + R;
    while (lo < hi) {
        ll mid = (lo + hi + 1) / 2;
        if (feasible(mid, L, R, b))
            lo = mid;
        else
            hi = mid - 1;
    }
    return 1 + lo;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << solve_one(a, b, c) << "\n";
    }
    return 0;
}
