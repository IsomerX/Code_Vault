<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;

int main(){
    int upper = 0, lower = 0;
    string s;
    cin >> s;
    for(char i : s){
        if(i >= 'A' && i <= 'Z'){
            upper++;
        }
        else  
            lower++;
    }

    if(upper > lower){
        for (auto & c: s) c = toupper(c);
        cout << s << endl;
    }
    else{
        for (auto & c: s) c = tolower(c);
        cout << s << endl;
    }

    return 0;
=======
#include<bits/stdc++.h>

using namespace std;

int main(){
    int upper = 0, lower = 0;
    string s;
    cin >> s;
    for(char i : s){
        if(i >= 'A' && i <= 'Z'){
            upper++;
        }
        else  
            lower++;
    }

    if(upper > lower){
        for (auto & c: s) c = toupper(c);
        cout << s << endl;
    }
    else{
        for (auto & c: s) c = tolower(c);
        cout << s << endl;
    }

    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}