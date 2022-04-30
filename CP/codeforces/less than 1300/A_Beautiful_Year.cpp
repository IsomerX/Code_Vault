#include <bits/stdc++.h>

using namespace std;

bool check(int n)
{
    unordered_map<int, int> m; 
    while (n)
    {   
        if(m[n%10]++ > 0)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    int a;
    cin >> a;
    for(int i = a+1; i < 10001; i++)
    {
        if(check(i)){
            cout << i << endl;
            break;
        }
    }
    return 0;
}