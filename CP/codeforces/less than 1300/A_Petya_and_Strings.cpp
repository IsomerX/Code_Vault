<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

// overload the < operator for strings

bool operator == (string a, string b)
{
    for(int i=0; i <a.size(); i++)
    {
        if(a[i] != b[i])
            return false;
    }
    return true;
}


bool operator < (string a, string b)
{
    for(int i=0; i <a.size(); i++)
    {
        if(a[i] < b[i])
            return true;
        else if(a[i] > b[i])
            return false;
    }
    return false;
}



int main()
{
    string a, b;
    cin >> a >> b;
    for(int i=0; i <a.size(); i++)
    {
        a[i] = tolower(a[i]);
    }
    for(int i=0; i <b.size(); i++)
    {
        b[i] = tolower(b[i]);
    }
    if(a == b)
        cout << 0 << endl;
    else if(a < b)
        cout << -1 << endl;
    else  
        cout << 1 << endl;
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

// overload the < operator for strings

bool operator == (string a, string b)
{
    for(int i=0; i <a.size(); i++)
    {
        if(a[i] != b[i])
            return false;
    }
    return true;
}


bool operator < (string a, string b)
{
    for(int i=0; i <a.size(); i++)
    {
        if(a[i] < b[i])
            return true;
        else if(a[i] > b[i])
            return false;
    }
    return false;
}



int main()
{
    string a, b;
    cin >> a >> b;
    for(int i=0; i <a.size(); i++)
    {
        a[i] = tolower(a[i]);
    }
    for(int i=0; i <b.size(); i++)
    {
        b[i] = tolower(b[i]);
    }
    if(a == b)
        cout << 0 << endl;
    else if(a < b)
        cout << -1 << endl;
    else  
        cout << 1 << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}