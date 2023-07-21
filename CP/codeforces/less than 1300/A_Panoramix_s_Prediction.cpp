<<<<<<< HEAD
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a({2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47});

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < a.size()-1; i++){
        if(a[i] == n && a[i+1] == m){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
=======
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a({2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47});

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < a.size()-1; i++){
        if(a[i] == n && a[i+1] == m){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}