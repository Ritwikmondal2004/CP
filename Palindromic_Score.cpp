#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long palScore(long long a, long long b) {
    // If either a or b is 0 or at least one is even, return a + b
    if ((a == 0 || b == 0) || (a % 2 == 0 || b % 2 == 0))
        return a + b;

    // Otherwise, subtract 1 from the sum
    return a + b - 1;
}

void solve(){
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        long long X, Y, Z;
        cin >> X >> Y >> Z;

        long long optionA = palScore(Y, Z);
        long long optionB = palScore(X, Z);
        long long optionC = palScore(X, Y);

        long long answer = optionA;
        if (optionB < answer) answer = optionB;
        if (optionC < answer) answer = optionC;

        cout << answer << endl;
    }

    return 0;
}