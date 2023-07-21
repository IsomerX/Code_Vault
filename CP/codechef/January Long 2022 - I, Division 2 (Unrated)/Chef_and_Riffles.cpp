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
#define fast_cin()                        \
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
        int n, k;
        read(n, k);
        vector<int> a(n), b(n);
        for (int i = 1; i <= n; i++)
        {
                a[i - 1] = i;
        }
        b[0] = 1;
        b[n - 1] = n;
        int par = -1;
        for (int i = 0; i < n; i++)
        {
                if (i == 0 || i == n - 1)
                        continue;
                if (par != -1)
                {
                        int cnt = 0;
                        int current = i+1;
                        // cout << current << " ";
                        while (cnt<par)
                        {
                                int j = current;
                                if (j % 2)
                                {
                                        if (j / 2 + 1 == i + 1)
                                                break;
                                        current = j / 2 + 1;
                                }
                                else
                                {
                                        if (n / 2 + j / 2 == i + 1)
                                                break;
                                        current = n / 2 + j / 2;
                                }
                                cnt++;
                                // cout << current << " ";
                        }
                        // cout << endl;
                        b[current - 1] = a[i];
                        continue;
                }
                vector<int> pattern;
                pattern.pb(i + 1);
                if ((i + 1) % 2)
                {
                        pattern.pb((i + 1) / 2 + 1);
                }
                else
                {
                        pattern.pb(n / 2 + (i + 1) / 2);
                }
                int cnt = 1;
                while (pattern[cnt] != i + 1)
                {
                        int j = pattern[cnt];
                        if (j % 2)
                        {
                                if (j / 2 + 1 == i + 1)
                                        break;
                                pattern.pb(j / 2 + 1);
                        }
                        else
                        {
                                if (n / 2 + j / 2 == i + 1)
                                        break;
                                pattern.pb(n / 2 + j / 2);
                        }
                        cnt++;
                }
                int k1 = k % pattern.size();
                par = k1;
                // cout << pattern[k1] << " ";
                b[pattern[k1] - 1] = a[i];
        }
        for (auto i : b)
                cout << i << " ";
        // cout << endl;
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
#define fast_cin()                        \
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
        int n, k;
        read(n, k);
        vector<int> a(n), b(n);
        for (int i = 1; i <= n; i++)
        {
                a[i - 1] = i;
        }
        b[0] = 1;
        b[n - 1] = n;
        int par = -1;
        for (int i = 0; i < n; i++)
        {
                if (i == 0 || i == n - 1)
                        continue;
                if (par != -1)
                {
                        int cnt = 0;
                        int current = i+1;
                        // cout << current << " ";
                        while (cnt<par)
                        {
                                int j = current;
                                if (j % 2)
                                {
                                        if (j / 2 + 1 == i + 1)
                                                break;
                                        current = j / 2 + 1;
                                }
                                else
                                {
                                        if (n / 2 + j / 2 == i + 1)
                                                break;
                                        current = n / 2 + j / 2;
                                }
                                cnt++;
                                // cout << current << " ";
                        }
                        // cout << endl;
                        b[current - 1] = a[i];
                        continue;
                }
                vector<int> pattern;
                pattern.pb(i + 1);
                if ((i + 1) % 2)
                {
                        pattern.pb((i + 1) / 2 + 1);
                }
                else
                {
                        pattern.pb(n / 2 + (i + 1) / 2);
                }
                int cnt = 1;
                while (pattern[cnt] != i + 1)
                {
                        int j = pattern[cnt];
                        if (j % 2)
                        {
                                if (j / 2 + 1 == i + 1)
                                        break;
                                pattern.pb(j / 2 + 1);
                        }
                        else
                        {
                                if (n / 2 + j / 2 == i + 1)
                                        break;
                                pattern.pb(n / 2 + j / 2);
                        }
                        cnt++;
                }
                int k1 = k % pattern.size();
                par = k1;
                // cout << pattern[k1] << " ";
                b[pattern[k1] - 1] = a[i];
        }
        for (auto i : b)
                cout << i << " ";
        // cout << endl;
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