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
}