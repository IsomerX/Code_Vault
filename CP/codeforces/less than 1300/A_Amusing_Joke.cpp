<<<<<<< HEAD
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
=======
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
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}