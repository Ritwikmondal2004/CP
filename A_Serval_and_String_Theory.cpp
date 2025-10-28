#include <bits/stdc++.h>
using namespace std;
#define  nl "\n"
#define  MOD 1000000007
/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
#define  all(v) v.begin(),v.end()
#define  SORT(v) sort(all(v))
#define  RSORT(v) sort(v.rbegin(),v.rend())
#define  MAXI(a) (*std::max_element((a).begin(), (a).end()))
#define  MINI(a) (*std::min_element((a).begin(), (a).end()))
#define  pt(x) cout<<(x)<<endl
#define  ptg(x) cout<<(x)<<" " 
#define  ll long long
#define  vi vector<ll>
#define  pb push_back
#define  ppb pop_back
#define  read(a) for(auto &i: a) cin >> i
#define  print(a) for(auto &i: a) cout << i << " "; cout << "\n"
#define  in3 int n, x, y; cin>>n>>x>>y

bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string t=s;
    ll cnt=0;
    reverse(t.begin(),t.end());
    set<char>st(s.begin(),s.end());
    if(st.size()==1){
        cout<<"NO"<<nl;
        return;
    }
    if(n==1){
        cout<<"YES"<<nl;
        return;
    }
    if(k==0){
        for(int i=0;i<n;i++){
            if(s[i]<t[i]){
                cout<<"YES"<<nl;
                return;
            }
            if(s[i]==t[i]) {

                continue;
            }
            if(s[i]>t[i]){
                cnt++;
                if(cnt){
                    cout<<"NO"<<nl;
                    return;
                }
            }    
        }
        if(cnt==0){
            cout<<"NO"<<nl;
            return;
        }
        
    }
    cout<<"YES"<<nl;
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