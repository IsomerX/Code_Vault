<<<<<<< HEAD
#include<iostream>
#define ll long long
using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        ll cnt = 0;
        vector<ll> mod(n+1,1);
        for(int i=(m>n?n:m);i>=2;i--){
            ll temp = (m-m%i);
            for(int j=1;j<i;j++){
                if(temp%j == 0)cnt++;
            }
        }
        if(n>m)
            cnt += (n+m-1)*(n-m)/2;
        cout << cnt << endl;
    
    }
    return 0;
=======
#include<iostream>
#define ll long long
using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        ll cnt = 0;
        vector<ll> mod(n+1,1);
        for(int i=(m>n?n:m);i>=2;i--){
            ll temp = (m-m%i);
            for(int j=1;j<i;j++){
                if(temp%j == 0)cnt++;
            }
        }
        if(n>m)
            cnt += (n+m-1)*(n-m)/2;
        cout << cnt << endl;
    
    }
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}