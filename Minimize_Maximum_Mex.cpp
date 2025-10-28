#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n;
cin >> n;

vector<int> first_deck(n), second_deck(n);
for (int i = 0; i < n; i++) cin >> first_deck[i];
for (int i = 0; i < n; i++) cin >> second_deck[i];

vector<int> card_count(n + 1, 0);       // Total count of each card
vector<int> same_position_count(n + 1, 0);  // Count where card is same in both decks at same position

for (int i = 0; i < n; i++) {
    if (first_deck[i] == second_deck[i]) {
        ++card_count[first_deck[i]];
        ++same_position_count[first_deck[i]];
    } else {
        ++card_count[first_deck[i]];
        ++card_count[second_deck[i]];
    }
}

int hidden_cards = 0;
int min_card_value = n;

for (int card_value = 0; card_value <= n; card_value++) {
    int needed;
    if (card_count[card_value] == 0) {
        needed = 2;  // Need 2 hidden cards of this value
    } else if (same_position_count[card_value] == 0) {
        needed = 1;  // Need 1 hidden card of this value
    } else {
        needed = 0;  // No hidden cards needed for this value
    }

    hidden_cards += needed;

    if (hidden_cards >= 2) {
        min_card_value = card_value;
        break;
    }
}

cout << min_card_value << "\n";

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