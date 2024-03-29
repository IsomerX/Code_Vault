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

bool isSubstring(string a, string b, vector<int> &m, int mid)
{
    string t(a);
    for (int i = 0; i <= mid; i++)
    {
        t[m[i] - 1] = '#';
    }

    int idx = 0;
    for (int i = 0; i < t.size() && idx < b.length(); i++)
    {
        if (t[i] == b[idx])
        {
            idx++;
        }
    }
    return idx == b.size();
}

void solve()
{
    string a, b;
    cin >> a >> b;

    vector<int> m;
    int temp;
    while (cin >> temp)
    {
        m.push_back(temp);
    }
    int cnt = 0;
    int start = 0;
    int end = m.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isSubstring(a, b, m, mid))
        {

            start = mid + 1;
            cnt = max(cnt, mid);
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << mid << endl;
}
int main()
{
    fast_cin();
    solve();
    return 0;
}