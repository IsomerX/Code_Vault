#include <bits/stdc++.h>  
#define ll long long 
using namespace std;

ll fast_exponentiation(ll a, ll b){
    if(b == 0) return 1;
    if(b == 1) return a;
    ll ans = 1;
    while(b > 0){
        if(b & 1) ans = (ans * a) % 1000000007;
        a = (a * a) % 1000000007;
        b >>= 1;
    }

    return ans;
}

int main(void)
{
    cout << fast_exponentiation(2,1000) << endl;
    return 0;
}