<<<<<<< HEAD
#include<iostream>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    string ans = "";

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            ans += '1';
        }
        else{
            ans += '0';
        }
    }
    cout << ans << endl;
    return 0;
=======
#include<iostream>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    string ans = "";

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            ans += '1';
        }
        else{
            ans += '0';
        }
    }
    cout << ans << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}