#include <bits/stdc++.h>  
 
using namespace std;

#define N (int)1e5

bool a[N] = {1};

void sieve(int n){
    for(int i = 2; i*i <= n; i++){
        if(a[i] && i*i <= n){
            for(int k = 2; k * i <= n; k++){
                a[k*i] = 0;
            }
        }
    }

    for(int i = 2; i <= n; i++){
        if(a[i])
            cout << i << " ";
    }
}

void segmented_sieve(int l, int r)

int main()
{
    memset(a, 1, N);
    sieve(1000);
    return 0;
}