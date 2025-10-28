#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> arr(n);
	arr[0] = 0;
	int l = 0, r = 0;
	for(int i = 0; i < n-1; i++)
	{
		if (s[i] == '<')
		{
			arr[i + 1] = --l;
		}
		else
		{
			arr[i + 1] = ++r;
		}
	}
    for(int i=0;i<n;i++)
	{
		cout << arr[i] - l + 1 << ' ';
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
    while(t--){
    	solve();
    }
    return 0; 
    
}