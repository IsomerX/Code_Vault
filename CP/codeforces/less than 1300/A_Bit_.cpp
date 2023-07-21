<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int x = 0;
    while(t--){
        string a;
        cin>>a;
        if (a.find('+') != string::npos) {
            x++;
        } 
        else {
            x--;
        }
    }
    cout << x << endl;
    return 0;
=======
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int x = 0;
    while(t--){
        string a;
        cin>>a;
        if (a.find('+') != string::npos) {
            x++;
        } 
        else {
            x--;
        }
    }
    cout << x << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}