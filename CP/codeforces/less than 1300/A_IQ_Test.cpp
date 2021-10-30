#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    string a[4];   
    for(int i = 0; i < 4; i++){
        cin >> a[i];
    }
    for(int i=0;i<3;i++){
        for(int j = 0; j < 3; j++){
            int sum = 0;
            if(a[i][j] == '#'){
                sum++;
            }
            if(a[i][j+1] == '#'){
                sum++;
            }
            if(a[i+1][j] == '#'){
                sum++;
            }
            if(a[i+1][j+1] == '#'){
                sum++;
            }
            if(sum !=2){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}