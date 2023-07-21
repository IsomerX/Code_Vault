<<<<<<< HEAD
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n>2){
            cout << n-2 << endl;
        }
        else if(n==2 || n==1){
            cout << n-1 << endl;
        }
    }
    return 0;
=======
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n>2){
            cout << n-2 << endl;
        }
        else if(n==2 || n==1){
            cout << n-1 << endl;
        }
    }
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}