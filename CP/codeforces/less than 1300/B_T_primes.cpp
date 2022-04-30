#include <bits/stdc++.h>  
 
using namespace std;

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

bool check(long long n){
    long long u = sqrt(n);
    // cout << u << endl;
    if(n == u*u && isPrime(u))
        return true;
    return false;
}

int main()
{
    long long n;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        if(a!= 1 && check(a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}