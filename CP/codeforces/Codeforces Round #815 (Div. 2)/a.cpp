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

pair<int, int> convert_to_lowest(int a, int b)
{
    int d;
    d = __gcd(a, b);

    a = a / d;
    b = b / d;

    return {a, b};
}

void solve()
{
    int a, b, c, d;
    read(a, b, c, d);

    p32 temp = convert_to_lowest(a, b);
    a = temp.first;
    b = temp.second;
    temp = convert_to_lowest(c, d);
    c = temp.first;
    d = temp.second;

    if (a == c && a == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (a == 0 || c == 0)
    {
        cout << 1 << endl;
        return;
    }

    if (a == c && b == d)
    {
        cout << 0 << endl;
        return;
    }
    if (a == c && b != d)
    {
        if (b % d == 0 || d % b == 0)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 2 << endl;
            return;
        }
    }
    if (a != c && b == d)
    {
        if (a % c == 0 || c % a == 0)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 2 << endl;
            return;
        }
    }
    int ans = 0;
    if (a % c == 0 || c % a == 0)
    {
        ans++;
    }
    else
    {
        ans += 2;
    }
    if (b % d == 0 || d % b == 0)
    {
        ans++;
    }
    else
    {
        ans += 2;
    }
    cout << ans << endl;
    return;
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