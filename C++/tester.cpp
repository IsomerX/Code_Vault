#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int convert10tob(int N, int b)
{
     if (N == 0)
        return 0;
     int x = N % b;
     N /= b;
     if (x < 0)
        N += 1; 
     convert10tob(N, b);
     return x < 0 ? x + (b * -1) : x;
}

int main()
{
    int b;
    cin >> b; cin.ignore();
    int num;
    int m;
    cin >> num >> m; cin.ignore();
    num = convert10tob(num, b);
    m = convert10tob(m, b);
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << "res" << endl;
}
