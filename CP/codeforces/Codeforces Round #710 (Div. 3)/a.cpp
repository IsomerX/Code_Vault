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
}