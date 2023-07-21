<<<<<<< HEAD
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
=======
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
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}