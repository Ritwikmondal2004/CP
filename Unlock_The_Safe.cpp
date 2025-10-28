#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int arraySize, maxOperations;  // Declare variables
    cin >> arraySize >> maxOperations;
    
    vector<int> arrA(arraySize), arrB(arraySize);
    
    for (int &elem : arrA) cin >> elem;
    for (int &elem : arrB) cin >> elem;

    int minSteps = 0, remainingOps;
    vector<int> diffValues;

    for (int i = 0; i < arraySize; i++) {
        int diff1 = min(abs(arrA[i] - arrB[i]), 9 - abs(arrA[i] - arrB[i]));
        int diff2 = max(abs(arrA[i] - arrB[i]), 9 - abs(arrA[i] - arrB[i]));
        minSteps += diff1;
        if (diff1 != diff2) diffValues.push_back(diff2 - diff1);
    }

    remainingOps = maxOperations - minSteps;
    if (remainingOps < 0) {
        cout << "No\n";
        return;
    }

    if (remainingOps % 2 == 0 || (!diffValues.empty() && *min_element(diffValues.begin(), diffValues.end()) <= remainingOps)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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
