<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

ll lcm(ll a, ll b){
    ll g = gcd(a, b);
    return a*b/g;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    }
    return 0;
}

=======
#include <bits/stdc++.h>  
 
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

ll lcm(ll a, ll b){
    ll g = gcd(a, b);
    return a*b/g;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    }
    return 0;
}

>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
