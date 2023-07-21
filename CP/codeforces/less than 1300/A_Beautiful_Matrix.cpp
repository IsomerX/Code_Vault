<<<<<<< HEAD
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int x, ans;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> x;
            if(x == 1){
                ans = abs(i - 2) + abs(j - 2);
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
=======
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int x, ans;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> x;
            if(x == 1){
                ans = abs(i - 2) + abs(j - 2);
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}