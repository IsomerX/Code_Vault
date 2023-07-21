<<<<<<< HEAD
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc,char **argv){
    int t;
    cin >> t;
    while(t--){
        long long n, m, x;
        cin >> n >> m >> x;
        long long h = x%n; 
        long long ans = 0;
        if(h==0 && x!=0){
            h = n;
        }
        long long w = ceil((long double)x/n);
        // cout << h << " " << w << endl;
        ans += m*(h-1) + w;
        cout << ans << endl;
    }
    return 0;
=======
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc,char **argv){
    int t;
    cin >> t;
    while(t--){
        long long n, m, x;
        cin >> n >> m >> x;
        long long h = x%n; 
        long long ans = 0;
        if(h==0 && x!=0){
            h = n;
        }
        long long w = ceil((long double)x/n);
        // cout << h << " " << w << endl;
        ans += m*(h-1) + w;
        cout << ans << endl;
    }
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}