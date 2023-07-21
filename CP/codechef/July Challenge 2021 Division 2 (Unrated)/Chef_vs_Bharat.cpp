<<<<<<< HEAD
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
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
ll MOD = (ll)1000000007;
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
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
}

template<typename ...T>
void print(T&&... args) {
    ((cout << args << " "), ...);
}

template <typename... T>
void read(T &...args) {
    ((cin >> args), ...);
}

template <typename... T>
void printd(string delimiter, T &&...args) {
    ((cout << args << delimiter), ...);
}

template <typename T>
void rc(T &t) {
    for (auto &e : t) {
        print(e);
    }
}

template <typename T>
void wc(string delimiter, T &t) {
    for (const auto &e : t) {
        printd(delimiter, e);
    }
    print(ln);
}

uint64_t prefix[(int)10e5+1] = {0};
uint64_t numbers[(int)10e5+1] = {0};

ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result
 
    // Update x if it is more than or
    // equal to p
    x = x % p;
 
    while (y > 0) {
       
        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

ll re(ll n){
    ll ans = n;
    n /= 10;
    while(n > 0){
        ans = ans*10 + n%10;
        n /= 10;
    }
    return ans;
}


void solve(){
    uint64_t n, m;
    read(n, m);
    uint64_t ans = prefix[m] - prefix[n];
    cout << power(numbers[n], ans, MOD) << endl;
}

int main()
{
    fast_cin();
    forsn(i,1,(int)10e5+1){
        numbers[i] = re(i);
        prefix[i] = numbers[i] + prefix[i-1];
    }
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}
=======
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
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
ll MOD = (ll)1000000007;
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
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
}

template<typename ...T>
void print(T&&... args) {
    ((cout << args << " "), ...);
}

template <typename... T>
void read(T &...args) {
    ((cin >> args), ...);
}

template <typename... T>
void printd(string delimiter, T &&...args) {
    ((cout << args << delimiter), ...);
}

template <typename T>
void rc(T &t) {
    for (auto &e : t) {
        print(e);
    }
}

template <typename T>
void wc(string delimiter, T &t) {
    for (const auto &e : t) {
        printd(delimiter, e);
    }
    print(ln);
}

uint64_t prefix[(int)10e5+1] = {0};
uint64_t numbers[(int)10e5+1] = {0};

ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result
 
    // Update x if it is more than or
    // equal to p
    x = x % p;
 
    while (y > 0) {
       
        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

ll re(ll n){
    ll ans = n;
    n /= 10;
    while(n > 0){
        ans = ans*10 + n%10;
        n /= 10;
    }
    return ans;
}


void solve(){
    uint64_t n, m;
    read(n, m);
    uint64_t ans = prefix[m] - prefix[n];
    cout << power(numbers[n], ans, MOD) << endl;
}

int main()
{
    fast_cin();
    forsn(i,1,(int)10e5+1){
        numbers[i] = re(i);
        prefix[i] = numbers[i] + prefix[i-1];
    }
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
