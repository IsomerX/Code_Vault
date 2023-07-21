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
}