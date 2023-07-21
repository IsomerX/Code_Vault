#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    // this program prints the square of positive numbers;

    int n;

    tryThis:
    cout << "Enter a positive number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Try again: ";
        goto tryThis;
    }

    cout << n*n;
    return 0;
}
