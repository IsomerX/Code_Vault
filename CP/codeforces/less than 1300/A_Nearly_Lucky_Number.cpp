<<<<<<< HEAD
#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int tot = 0;
    for(char c : s)
        if(c == '4' || c == '7')
            tot++;
    if(tot == 4 || tot == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
=======
#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int tot = 0;
    for(char c : s)
        if(c == '4' || c == '7')
            tot++;
    if(tot == 4 || tot == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}