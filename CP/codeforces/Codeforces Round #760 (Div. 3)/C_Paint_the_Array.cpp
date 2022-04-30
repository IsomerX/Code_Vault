#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}


void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    ll odd, even;
    forn(i, n){
        cin >> a[i];
        if(i == 1){
            odd = a[i];
        }
        else if(i == 0){
            even = a[i];
        }
        else if(i % 2 == 1){
            odd = gcd(odd, a[i]);
        }
        else if(i%2== 0){
            even = gcd(even, a[i]);
        }
    }
    // cout << odd << " " << even << endl;
    if(odd==1 && even == 1){
        cout << "0" << endl;
        return;
    }
    bool notOdd = 0;
    for(ll i = 0; i < n; i+=2){
        if(a[i] % odd == 0){
            notOdd = 1;
            break;
        }
    }

    if(notOdd == 0){
        cout << odd << endl;
        return;
    }

    bool notEven = 0;
    for(int i = 1; i < n; i+=2){
        if(a[i] % even == 0){
            notEven = 1;
            break;
        }
    }

    if(notEven == 0){
        cout << even << endl;
        return;
    }

    cout << "0" << endl;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}