#include <bits/stdc++.h>  
 
using namespace std;

#define ll long long

ll fast_expo(ll a, ll b, ll mod = 100000007)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % mod;

    ll ans = 1;

    while (b > 0)
    {
        if (b % 2)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

bool isPrime(int x){
    for(int i = 2; i*i < x; i++){
        if(x % i == 0) 
            return false;
    }

    return true;
}

bool probablyPrimeFermat(int n, int iter = 5){
    if(n < 4)
        return n == 2 || n == 3;

    for(int i = 0; i <= iter; i++){
        int a = 2 + (int)rand() % (n - 3);
        if(fast_expo(a, n - 1, n) != 1)
            return 0;
    }
    return 1;
}

int main()
{
    cout << isPrime(10) << endl;
    cout << isPrime(11) << endl;
    cout << isPrime(12) << endl;
    cout << isPrime(13) << endl;
    
    cout << probablyPrimeFermat(10) << endl;
    cout << probablyPrimeFermat(11) << endl;
    cout << probablyPrimeFermat(12) << endl;
    cout << probablyPrimeFermat(13) << endl;
    cout << probablyPrimeFermat(561) << endl;
    return 0;
}