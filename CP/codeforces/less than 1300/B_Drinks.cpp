<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    double sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        sum += a;
    }

    // set the precision to 4 decimal points

    cout << fixed << setprecision(4) << (double)(sum/n) << endl;
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    double sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        sum += a;
    }

    // set the precision to 4 decimal points

    cout << fixed << setprecision(4) << (double)(sum/n) << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}