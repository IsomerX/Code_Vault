<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    long long n, t;
    cin >> n >> t;
    long long ans = 0;
    long long last;
    for(long long i = 0; i < t; i++){
        long long x;
        cin >> x;
        if(i == 0){
            last = x;
            ans += x - 1;
        }
        else{
            if(x >= last){
                ans += x - last;
            }
            else{  
                ans += n - last + x;
            }
            last = x;
        }
        // cout << ans << " ";
    }

    cout << ans;
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    long long n, t;
    cin >> n >> t;
    long long ans = 0;
    long long last;
    for(long long i = 0; i < t; i++){
        long long x;
        cin >> x;
        if(i == 0){
            last = x;
            ans += x - 1;
        }
        else{
            if(x >= last){
                ans += x - last;
            }
            else{  
                ans += n - last + x;
            }
            last = x;
        }
        // cout << ans << " ";
    }

    cout << ans;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}