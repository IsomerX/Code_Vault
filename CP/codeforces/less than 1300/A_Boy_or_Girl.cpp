<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    set<char> a;
    string b;
    cin >> b;
    for(auto i : b){
        a.insert(i);
    }
    cout << (a.size()%2?"IGNORE HIM!":"CHAT WITH HER!");
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    set<char> a;
    string b;
    cin >> b;
    for(auto i : b){
        a.insert(i);
    }
    cout << (a.size()%2?"IGNORE HIM!":"CHAT WITH HER!");
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}