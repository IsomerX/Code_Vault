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
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
}

template <typename T>
void rv(v32 v, T &t) { ll x;
    forn(i,t) {
        cin>>x; v.pb(x);
    }
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

void solve(){
    int m,n;
    string s="";
    cin>>n>>m;
    int cnt=0;
    if(abs(m-n)<=1){
        cout<<m+n+2<<ln;
    }
    if(m==n){
        for(int i=0; i<=n; i++){
            cout<<"01";
            
        }
    }
    else if(m+1==n || m-1 == n || n-1 == m || n+1 ==m){
        if(m>n){
            for(int i=0; i<m; i++){
                cout<<"01";
            }
            cout<<"0";
        }
        else{
            for(int i=0; i<n; i++){
                cout<<"10";
            }
            cout<<"1";
        }
    }
    else{
        if(m<n){
            for(int i=0; i<=m; i++){
                s.append("01");
            }
            for(int i=0; i<=n-m-1; i++){
                s.append("101");
            }
        }
        if(m>n){
            for(int i=0; i<=n; i++){
                s.append("10");
            }
            for(int i=0; i<=m-n-1; i++){
                s.append("010");
            }
        }
    }
    if(s.length()!=0){
        cout<<s.length()<<ln;
        cout<<s;
    }
    cout<<ln;
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