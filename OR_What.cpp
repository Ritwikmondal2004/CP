#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll N, X;
    cin >> N >> X;

    vector<ll> P(N + 1);
    iota(P.begin() + 1, P.end(), 1);

    vector<bool> processed_idx(N + 1, false);

    if (X <= N) {
        processed_idx[X] = true;
    }

    for (ll i = 1; i <= N; ++i) {
        if (processed_idx[i]) {
            continue;
        }

        ll j = X ^ i;

        if (((i | X) == X) && (j >= 1 && j <= N) && ((j | X) == X) && !processed_idx[j]) {
            swap(P[i], P[j]);
            processed_idx[i] = true;
            processed_idx[j] = true;
        } else {
            processed_idx[i] = true;
        }
    }

    for (ll i = 1; i <= N; ++i) {
        cout << P[i] << (i == N ? "" : " ");
    }
    cout << endl;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    return 0; 
    
}