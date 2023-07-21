#include<bits/stdc++.h>

using namespace std;

int main(){
    int x = 0, y = 0, z = 0;
    int x1 = 0, y1 = 0, z1 = 0;
    int t = 0;
    cin >> t;
    while(t--){
        cin >> x1 >> y1 >> z1;
        x+=x1;
        y+=y1;
        z+=z1;
    }
    if(x == y && y== z && z == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }  
    return 0;
}