<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;
    string b = "";
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '.'){
            b+='0';
        }
        else if(a[i] == '-' && a[i+1] == '.'){
            b+='1';
            i++;
        }
        else if(a[i] == '-' && a[i+1] == '-'){
            b+='2';
            i++;
        }
    }
    cout << b << endl;
    return 0;
=======
#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;
    string b = "";
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '.'){
            b+='0';
        }
        else if(a[i] == '-' && a[i+1] == '.'){
            b+='1';
            i++;
        }
        else if(a[i] == '-' && a[i+1] == '-'){
            b+='2';
            i++;
        }
    }
    cout << b << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}