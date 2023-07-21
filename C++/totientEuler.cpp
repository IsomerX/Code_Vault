<<<<<<< HEAD
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

vector<ll> factorize(ll n){
    vector<ll> factors;
    for(int i = 2; i*i <=n; i++){
        while(n%i==0){
            factors.push_back(i);
            n/=i;
        }
    }
    if(n>1)
        factors.push_back(n);
    return factors;
}

ll tot(ll n){
    vector<ll> factors(factorize(n));
    unordered_map<ll, ll> a;
    for(auto i : factors)
        a[i]++;
    ll sum = 1;
    for(auto i : a){
        // cout << i.first << " " << i.second << endl;
        sum*=pow(i.first, i.second-1)*(i.first - 1);
    }
    return sum;
}

int main(){
    ll a = 4, m = 5;
    cout << tot(a) << "\n";
    // modular inverse ahead!
    ll inverse = pow(a,tot(m)-1);
    cout << inverse%m << endl;
    return 0;
=======
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

vector<ll> factorize(ll n){
    vector<ll> factors;
    for(int i = 2; i*i <=n; i++){
        while(n%i==0){
            factors.push_back(i);
            n/=i;
        }
    }
    if(n>1)
        factors.push_back(n);
    return factors;
}

ll tot(ll n){
    vector<ll> factors(factorize(n));
    unordered_map<ll, ll> a;
    for(auto i : factors)
        a[i]++;
    ll sum = 1;
    for(auto i : a){
        // cout << i.first << " " << i.second << endl;
        sum*=pow(i.first, i.second-1)*(i.first - 1);
    }
    return sum;
}

int main(){
    ll a = 4, m = 5;
    cout << tot(a) << "\n";
    // modular inverse ahead!
    ll inverse = pow(a,tot(m)-1);
    cout << inverse%m << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}