#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int num_students;
    cin >> num_students;
    
    int heights[num_students];
    for (int i = 0; i < num_students; i++) {
        cin >> heights[i];
    }
    
    int bhoomi_height = heights[num_students - 1]; // Bhoomi's height
    
    int less_height_count = 0;

    // Count consecutive students from the front with height strictly less than Bhoomi's height
    for (int i = 0; i < num_students - 1; i++) {
        if (heights[i] < bhoomi_height)
            less_height_count++;
        else
            break;
    }

    int min_swaps = num_students - (less_height_count + 1);
    cout << min_swaps << "\n";
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    
    return 0; 
}
