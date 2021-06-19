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

void solve(){
    int n, m;
    cin >> n >> m;
    vector<short int> a(n, 0);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> dest(m);
    for(int i = 0; i < m; i++)
        cin >> dest[i];
    unordered_map<int, int> ans;
    ans[0] = 0;
    for(int i = 1; i < n; i++){
        if(a[i])
            ans[i] = 0;
        else
            ans[i] = INT_MAX;
    }
    int right = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            right = i;
        }
        if(right != -1){
            if(a[i] == 0)
                ans[i] = min(ans[i], i - right);
        }
    }
    int left = -1;
    for(int i = n-1; i >= 0; i--){
        if(a[i] == 2){
            left = i;
        }
        if(left != -1){
            if(a[i] == 0)
                ans[i] = min(ans[i], left - i);
        }
    }
    for(int i : dest){
        if(ans[i-1] == INT_MAX){
            cout << -1 << " ";
            continue;
        }
        cout << ans[i-1] << " ";
    }
    cout << endl;
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