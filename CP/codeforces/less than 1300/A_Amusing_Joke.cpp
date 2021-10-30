#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    multiset<char> s,r;
    string a, b,c;
    cin >> a >> b >> c;

    for(auto i:a)
        s.insert(i);
    for(auto i:b)
        s.insert(i);
    for(auto i:c)
        r.insert(i);
    if(s==r)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}