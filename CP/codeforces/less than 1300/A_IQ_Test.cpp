<<<<<<< HEAD
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
=======
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
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}