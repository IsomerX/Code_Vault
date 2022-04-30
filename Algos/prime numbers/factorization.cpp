#include <bits/stdc++.h>  
 
using namespace std;

#define N (int)1e7

bool a[N];

vector<int> factorsFinder(int n){
    vector<int> factors;

    for(int i = 2; i * i <= n; i++){
        while(n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }

    if(n > 1)
        factors.push_back(n);

    return factors;
}

// we can optimize this algorithm by precalculating all the primes under the sqrt n



void sieve(int n){
    memset(a, 1, n);

    for(int i = 2; i*i <= n; i++){
        if(a[i] && i*i <= n){
            for(int k = 2; k * i <= n; k++){
                a[k*i] = 0;
            }
        }
    }
}

vector<int> factorsFinderPrime(int n){
    sieve(n);

    vector<int> factors;

    for(int i = 2; i * i <= n; i++){
        if(a[i]){
            while(n % i == 0){
                factors.push_back(i);
                n /= i;
            }
        }
    }

    if(n > 1)
        factors.push_back(n);
    
    return factors;
}



int main()
{
    for(auto i : factorsFinderPrime(3*5*3*11*11)){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}