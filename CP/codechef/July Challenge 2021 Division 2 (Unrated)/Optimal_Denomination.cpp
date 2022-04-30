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

typedef uint64_t ll;
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

pair<ll, ll> MaxGCD(const vector<ll> &a, ll n)
{
    ll removed = -1;
    ll Prefix[n + 2];
    ll Suffix[n + 2];

    Prefix[1] = a[0];
    for (ll i = 2; i <= n; i += 1)
    {
        Prefix[i] = __gcd(Prefix[i - 1], a[i - 1]);
    }

    Suffix[n] = a[n - 1];

    for (ll i = n - 1; i >= 1; i -= 1)
    {
        Suffix[i] = __gcd(Suffix[i + 1], a[i - 1]);
    }

    ll ans = max(Suffix[2], Prefix[n - 1]);

    for (ll i = 2; i < n; i += 1)
    {
        ll temp = __gcd(Prefix[i - 1], Suffix[i + 1]);
        if (temp > ans)
        {
            removed = i;
            ans = temp;
        }
    }

    if (ans == Suffix[2])
    {
        return {ans, 0};
    }
    else if (ans == Prefix[n - 1])
    {
        return {ans, n - 1};
    }
    else
    {
        return {ans, removed};
    }
}

void solve()
{
    ll n;
    read(n);
    vector<ll> a(n);
    forn(i, n)
            cin >>
        a[i];

    sort(all(a), greater<ll>());

    pair<ll, ll> res = MaxGCD(a, n);

    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        if (i != res.second)
        {
            ans += a[i] / res.first;
        }
    }
    cout << ans + 1 << endl;
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
}
