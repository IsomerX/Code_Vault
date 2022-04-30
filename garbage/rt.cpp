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

vector<vector<int>> global;

vector<int> fid(vector<vector<int>> &a, int current, int n)
{
    vector<int> temp;
    int k = current, q = current;
    if (current + 1 <= n / 2)
    {
        for (int i = k; i <= n - k - 1; i++)
        {
            temp.pb(a[i][current]);
        }
        for (int i = q + 1; i < n - k - 1; i++)
        {
            temp.pb(a[n - k - 1][i]);
        }
    }
    else
    {
        for (int i = k; i >= n - k - 1; i--)
        {
            temp.pb(a[i][current]);
        }
        for (int i = q - 1; i > n - k - 1; i--)
        {
            temp.pb(a[n - k - 1][i]);
        }
    }
    return temp;
}

void fil(vector<vector<int>> &base, int current, int n, vector<vector<int>> &qed)
{
    int k = current, q = current;
    if (current + 1 <= n / 2)
    {
        int cnt = 0;
        for (int i = k; i <= n - k - 1; i++, cnt++)
        {
            base[i][current] = qed[current][cnt];
        }
        for (int i = q + 1; i < n - k - 1; i++, cnt++)
        {
            base[n - k - 1][i] = qed[current][cnt];
        }
    }
    else
    {
        int cnt = 0;
        for (int i = k; i >= n - k - 1; i--, cnt++)
        {
            base[i][current] = qed[current][cnt];
        }
        for (int i = q - 1; i > n - k - 1; i--, cnt++)
        {
            base[n - k - 1][i] = qed[current][cnt];
        }
    }
}

void mergifier()
{
    ll n = global.size(), j, i;
    vector<int> taco(n / 2, 0);
    forn(i, n / 2)
        taco[i] = global[i].size();
    while (true)
    {
        ll p = 0;
        for (int i = 0; i < n / 2; i++)
        {
            vector<int> v1 = global[i];
            for (j = 0; j < global[n - 1 - i].size(); j++)
                v1.pb(global[n - 1 - i][j]);

            if (taco[i] >= v1.size())
                continue;
            p = 1;
            for (j = taco[i] - 1; j >= 0; j--)
            {
                if (v1[j] >= v1[j + 1])
                    swap(v1[j], v1[j + 1]);
            }
            for (j = 0; j < global[i].size(); j++)
                global[i][j] = v1[j];
            for (ll k = 0; k < global[n - 1 - i].size(); k++)
                global[n - 1 - i][k] = v1[j++];
            taco[i]++;
        }
        if (p == 0)
            break;

        vector<vector<int>> a(n, vector<int>(n));
        forn(o, n)
        {
            fil(a, o, n, global);
        }
        for (auto pp : a)
        {
            for (auto po : pp)
            {
                cout << po << " ";
            }
        }
        cout << endl;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        forn(j, n)
        {
            int x;
            cin >> x;
            temp.pb(x);
        }
        a.pb(temp);
    }
    vector<vector<int>> r;

    forn(i, n)
    {
        r.pb(fid(a, i, n));
    }

    int large = r[0].size();

    for (int i = 1; i < large; i++)
    {
        for (int j = 0; j < r.size(); j++)
        {
            if (i >= r[j].size())
                continue;
            int key, q;
            key = r[j][i];
            q = i - 1;
            while (q >= 0 && r[j][q] > key)
            {
                r[j][q + 1] = r[j][q];
                q--;
            }
            r[j][q + 1] = key;
        }
        forn(o, n)
        {
            fil(a, o, n, r);
        }
        for (auto pp : a)
        {
            for (auto po : pp)
            {
                cout << po << " ";
            }
        }
        cout << endl;
    }
    global = r;
    mergifier();
}
int main()
{
    fast_cin();
    ll t = 1;
    // cin >> t;
    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
}