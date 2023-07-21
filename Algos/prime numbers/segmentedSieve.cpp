<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

#define ll long long
#define MAX (ll)1e5

void segmented_sieve(ll l, ll r){
    bool segmentPrimes[r - l + 1];
    memset(segmentPrimes, 1, sizeof(segmentPrimes));

    bool isPrime[MAX];
    memset(isPrime, 1, MAX);
    isPrime[0] = isPrime[1] = 0;

    ll end = sqrt(r);

    for(int i = 2; i <= end; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= end; j+=i){
                isPrime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= end; i++){
        if(isPrime[i]){
            int j = (l/i) * i;
            if(j - l < 0)
                j += i;
            
            for(; j <= r; j+=i){
                segmentPrimes[j - l] = 0;
            }
        }
    }

    for(int i = 0; i < sizeof(segmentPrimes); i++)
        if(segmentPrimes[i])
            cout << i + l << " ";
    
    cout << endl;
}

int main()
{
    segmented_sieve(147403647, 147413647);
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

#define ll long long
#define MAX (ll)1e5

void segmented_sieve(ll l, ll r){
    bool segmentPrimes[r - l + 1];
    memset(segmentPrimes, 1, sizeof(segmentPrimes));

    bool isPrime[MAX];
    memset(isPrime, 1, MAX);
    isPrime[0] = isPrime[1] = 0;

    ll end = sqrt(r);

    for(int i = 2; i <= end; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= end; j+=i){
                isPrime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= end; i++){
        if(isPrime[i]){
            int j = (l/i) * i;
            if(j - l < 0)
                j += i;
            
            for(; j <= r; j+=i){
                segmentPrimes[j - l] = 0;
            }
        }
    }

    for(int i = 0; i < sizeof(segmentPrimes); i++)
        if(segmentPrimes[i])
            cout << i + l << " ";
    
    cout << endl;
}

int main()
{
    segmented_sieve(147403647, 147413647);
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}