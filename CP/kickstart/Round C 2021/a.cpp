#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int g, p;
        cin >> g >> p;
        g=11-g;
        vector<int> a(12);
        for(int i = 0; i < 10; i++){
            cin >> a[9-i];
        }
        int sum = 0;
        for(int i = 0; i < g; i++){
            sum += a[i];
        }
        
        if(sum%p == 0)
            cout << sum/p << " " << sum/p << endl;
        else    
            cout << floor(sum/p) << " " << 1+(int)sum/p << endl;
    }
    return 0;
}