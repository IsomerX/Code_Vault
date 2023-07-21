<<<<<<< HEAD
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template <typename... Args>
void logger(string vars, Args &&...values)
{
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
}

template <typename... T>
void print(T &&...args)
{
    ((cout << args << " "), ...);
}

template <typename... T>
void read(T &...args)
{
    ((cin >> args), ...);
}

template <typename... T>
void printd(string delimiter, T &&...args)
{
    ((cout << args << delimiter), ...);
}

template <typename T>
void rc(T &t)
{
    for (auto &e : t)
    {
        print(e);
    }
}

template <typename T>
void wc(string delimiter, T &t)
{
    for (const auto &e : t)
    {
        printd(delimiter, e);
    }
    print(ln);
}

void solve()
{
    int n;
    cin >> n;
    string a, b;
    vector<char> c(2 * n);
    read(a, b);
    sort(all(a));
    sort(all(b), greater<char>());
    int lefta = 0;
    int leftb = 0;
    bool turn_a = 1;
    int rightb = n-1;
    int leftMost = 0;
    int rightMost = 2*n-1;
    for (int i = 0; i < 2*n; i++)
    {       
        if(turn_a){
            if(a[i] < b[i]){
                c[leftMost++] = a[lefta++];
            }
            else{
                c[rightMost--] = a[lefta++];
            }
        }
        else{
            if(a[i] < b[i]){
                c[leftMost++] = b[leftb];
            }
            else{
                c[rightMost--] = b[rightb--];
            }
        }
        turn_a = !turn_a;
    }
    for(auto i : c){
        cout << i;
    }
    cout << endl;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
=======
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template <typename... Args>
void logger(string vars, Args &&...values)
{
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
}

template <typename... T>
void print(T &&...args)
{
    ((cout << args << " "), ...);
}

template <typename... T>
void read(T &...args)
{
    ((cin >> args), ...);
}

template <typename... T>
void printd(string delimiter, T &&...args)
{
    ((cout << args << delimiter), ...);
}

template <typename T>
void rc(T &t)
{
    for (auto &e : t)
    {
        print(e);
    }
}

template <typename T>
void wc(string delimiter, T &t)
{
    for (const auto &e : t)
    {
        printd(delimiter, e);
    }
    print(ln);
}

void solve()
{
    int n;
    cin >> n;
    string a, b;
    vector<char> c(2 * n);
    read(a, b);
    sort(all(a));
    sort(all(b), greater<char>());
    int lefta = 0;
    int leftb = 0;
    bool turn_a = 1;
    int rightb = n-1;
    int leftMost = 0;
    int rightMost = 2*n-1;
    for (int i = 0; i < 2*n; i++)
    {       
        if(turn_a){
            if(a[i] < b[i]){
                c[leftMost++] = a[lefta++];
            }
            else{
                c[rightMost--] = a[lefta++];
            }
        }
        else{
            if(a[i] < b[i]){
                c[leftMost++] = b[leftb];
            }
            else{
                c[rightMost--] = b[rightb--];
            }
        }
        turn_a = !turn_a;
    }
    for(auto i : c){
        cout << i;
    }
    cout << endl;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}