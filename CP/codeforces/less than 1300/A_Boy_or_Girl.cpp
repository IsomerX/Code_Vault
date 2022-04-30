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
}