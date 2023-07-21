<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    cin >> n;
    if((n-3)%4 != 0 && (n-4)%4 != 0)
        cout << "NO";
    else{
        cout << "YES";
        if((n-3)%4 == 0){
            int x = ceil(n/2);
            vector<int> a(x), b(x);
            a[0] = 0;
        }
    }
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    cin >> n;
    if((n-3)%4 != 0 && (n-4)%4 != 0)
        cout << "NO";
    else{
        cout << "YES";
        if((n-3)%4 == 0){
            int x = ceil(n/2);
            vector<int> a(x), b(x);
            a[0] = 0;
        }
    }
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}