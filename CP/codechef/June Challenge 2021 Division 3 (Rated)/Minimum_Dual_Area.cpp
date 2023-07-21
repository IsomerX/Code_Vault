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
#define INF INT_MAX
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
    int n;cin>>n;
    vector<pair<int,int>>x;
    vector<pair<int,int>>y;
    multiset<int>X;
    multiset<int>Y;
    
    for(int i=0;i<n;i++)
    {
        int a;int b;cin>>a>>b;
        x.push_back({a,b});
        y.push_back({b,a});
        X.insert(a);
        Y.insert(b);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    int maxh1=0;
    int minh1=INF;
    int h1=0;int h2=0;
    int area=INF;
    
    for(int i=0;i<n-1;i++)
    {
        maxh1=max(maxh1,x[i].second);
        minh1=min(minh1,x[i].second);
        h1=maxh1-minh1;
        auto it=Y.find(x[i].second);
        Y.erase(it);
        h2=*(Y.rbegin())-*(Y.begin());
        int narea=(x[i].first-x[0].first)*h1;
        narea+=((x[n-1].first-x[i+1].first)*h2);
        
        area=min(area,narea);
    }
    maxh1=0;
    minh1=INF;
    h1=0;
    h2=0;
    for(int i=0;i<n-1;i++)
    {
        maxh1=max(maxh1,y[i].second);
        minh1=min(minh1,y[i].second);
        h1=maxh1-minh1;
        auto it=X.find(y[i].second);
        X.erase(it);
        h2=*(X.rbegin())-*(X.begin());
        int narea=(y[i].first-y[0].first)*h1;
        narea+=((y[n-1].first-y[i+1].first)*h2);
        
        area=min(area,narea);
    }
    if(area==INF)
    area=0;
    cout<<area<<endl;
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
