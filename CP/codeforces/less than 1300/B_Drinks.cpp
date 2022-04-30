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
}