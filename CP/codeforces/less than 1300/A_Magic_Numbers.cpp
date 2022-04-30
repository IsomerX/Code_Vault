#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    string a;
    cin >> a;
    int ma = 0;
    if(a[0] != '1'){
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '1')
            ma = 0;
        else if(a[i] == '4'){
            ma++;
            if(ma > 2){
                cout << "NO" << endl;
                return 0;
            }
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}