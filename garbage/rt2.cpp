#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#include <algorithm>
#include <vector>
#include <string>
#define ll long long
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define lcm(a, b) ((a)*(b)/__gcd(a,b))
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define INF 10000000000000007
#define ff first
#define ss second
using namespace std;

//   cout<<fixed<<setprecision(15)<<ans<<endl;
//   log2(n) --->  position of most significant bit of n

ll gcd(ll a, ll b)
{
    if (b == 0)
    return a;
    return gcd(b, a % b);
}

ll fact[200005];
void precompute(){
    fact[0] = 1;
    for (ll i = 1; i < 200005; i++)
        fact[i] = (fact[i - 1] * i) % mod;
}

ll factorial(ll n){
    if (n == 0)
        return 1;
    return (n%mod * factorial(n - 1)%mod)%mod;
}

ll power(ll x, ll y, ll p){
    ll res = 1;
    x = x % p;

    while (y > 0){
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

ll modInverse(ll n, ll p){
    return power(n, p - 2, p);
}

ll nCr(ll n, ll r, ll p){
    if (n < r)
        return 0;
    if (r == 0)
        return 1;

    return (fact[n] * modInverse(fact[r], p) % p
            * modInverse(fact[n - r], p) % p)% p;
}

bool is_prime(ll n){
    if(n==1)
    return false;

    for(ll i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}

vector<vector<ll>>v3;

/*
18 16 16 8 23 13 26 11 28 24 20 25 1 30 15 19 
18 16 16 8 23 13 26 25 28 24 20 19 1 30 15 11 
1 16 16 25 18 13 26 19 23 24 20 11 28 30 15 8 
1 25 25 19 18 13 26 16 23 24 20 11 28 30 15 8 
1 19 19 16 15 13 26 11 18 24 20 8 23 28 30 4

3 8 5 20 21 2 30 15 1 
3 8 5 20 21 2 30 15 1 
3 8 5 15 21 2 20 30 1
*/

void insertion_sort(vector<vector<ll>>&v, vector<ll>ind){
    ll n=v.size(),i,j,p=0;
    while(1){
        p=0;
        for(i=0;i<n;i++){
            if(ind[i] >= v[i].size())
                continue;
            p=1;
            for(j=ind[i]-1;j>=0;j--){
                if(v[i][j] >= v[i][j+1])
                    swap(v[i][j],v[i][j+1]);
            }
            ind[i]++;
        }
        if(p==0)
            break;
        vector<vector<ll>>v1(n,vector<ll>(n));
        for(i=0;i<n/2;i++){
            j=0;
           ll x=i,y=i;
           ll sz=v[i].size();
           while(x < n-i){
               v1[x][y]=v[i][j];
               x++,j++;
           }
           x=n-1-i,y=i+1;
           while(y < n-1-i){
            v1[x][y]=v[i][j];
            y++,j++;
           }
        }
        if(n%2==1){
            v1[n/2][n/2]=v[n/2][0];
        }
        for(i=(n+1)/2;i<n;i++){
          j=0;
           ll x=i,y=i;
           ll sz=v[i].size();
           while(x >= n-i-1){
               v1[x][y]=v[i][j];
               x--,j++;
           }
           x=n-i-1,y=i-1;
           while(y > n-i-1){
            v1[x][y]=v[i][j];
            y--,j++;
           }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
}

void merge_it(){
    ll n=v3.size(),i,j;
    vector<ll>ind(n/2,0);
    for(i=0;i<n/2;i++)
        ind[i]=v3[i].size();
    while(1){
        ll p=0;
        for(i=0;i<n/2;i++){
            vector<ll>v1=v3[i];
            for(j=0;j<v3[n-1-i].size();j++)
                v1.pb(v3[n-1-i][j]);

            if(ind[i] >= v1.size())
                continue;
            p=1;
            for(j=ind[i]-1;j>=0;j--){
                if(v1[j] >= v1[j+1])
                    swap(v1[j],v1[j+1]);
            }
            for(j=0;j<v3[i].size();j++)
                v3[i][j]=v1[j];
            for(ll k=0;k<v3[n-1-i].size();k++)
                v3[n-1-i][k]=v1[j++];
            ind[i]++;

        }
        if(p==0)
            break;

        vector<vector<ll>>v1(n,vector<ll>(n));
        for(i=0;i<n/2;i++){
            j=0;
           ll x=i,y=i;
           ll sz=v3[i].size();
           while(x < n-i){
               v1[x][y]=v3[i][j];
               x++,j++;
           }
           x=n-1-i,y=i+1;
           while(y < n-1-i){
            v1[x][y]=v3[i][j];
            y++,j++;
           }
        }
        if(n%2==1){
            v1[n/2][n/2]=v3[n/2][0];
        }
        for(i=(n+1)/2;i<n;i++){
          j=0;
           ll x=i,y=i;
           ll sz=v3[i].size();
           while(x >= n-i-1){
               v1[x][y]=v3[i][j];
               x--,j++;
           }
           x=n-i-1,y=i-1;
           while(y > n-i-1){
            v1[x][y]=v3[i][j];
            y--,j++;
           }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*
18 4 16 8 23 13 26 11 28 24 20 25 1 30 15 19 
18 4 16 8 23 13 26 25 28 24 20 19 1 30 15 11 
1 4 16 25 18 13 26 19 23 24 20 11 28 30 15 8 
1 4 25 19 18 13 26 16 23 24 20 11 28 30 15 8 
1 25 19 16 15 13 26 11 18 24 20 8 23 28 30 4 
1 25 19 16 4 13 26 11 15 20 24 8 18 23 28 30 
1 25 19 16 4 13 26 11 8 20 24 30 15 18 23 28 
1 25 19 16 4 13 26 30 8 20 24 28 11 15 18 23 
1 25 19 30 4 13 26 28 8 20 24 23 11 15 16 18 
1 25 30 28 4 13 26 23 8 20 24 19 11 15 16 18 
1 30 28 25 4 13 26 23 8 20 24 19 11 15 16 18

3 8 5 20 21 2 30 15 1 
3 8 5 20 21 2 30 15 1 
3 8 5 15 21 2 20 30 1 
1 8 5 3 21 2 15 20 30 
1 8 5 2 21 30 3 15 20 
1 8 30 2 21 20 3 5 15 
1 30 20 2 21 15 3 5 8
*/
int main(){
    IO;
    ll t,n,m,i,j,k;
    t=1;

    while(t--){
        cin>>n;
        vector<vector<ll>>v(n,vector<ll>(n));
        k=n;
        vector<vector<ll>>v2;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cin>>v[i][j];
        }

        for(i=0;i<n/2;i++){
            vector<ll>v1;
            ll x=i,y=i;
            while(x < n-i){
                v1.pb(v[x][y]);
                x++;
            }
            x=n-1-i,y=i+1;
            while(y < n-1-i){
                v1.pb(v[x][y]);
                y++;
            }
            v2.pb(v1);
        }
        if(n%2==1){
            v2.pb({v[n/2][n/2]});
        }
        for(i=(n+1)/2;i<n;i++){
            vector<ll>v1;
            ll x=i,y=i;
            while(x >= n-i-1){
               v1.pb(v[x][y]);
               x--;
           }
           x=n-i-1,y=i-1;
           while(y > n-i-1){
            v1.pb(v[x][y]);
            y--;
           }
            v2.pb(v1);
        }
        for(auto i : v2) {
            for(auto j : i)
                cout << j << " ";
            cout << endl;
        }

        vector<ll>ind(n,1);
        v3=v2;
        insertion_sort(v2,ind);
        v3=v2;
        merge_it();
    }
    return 0;
}