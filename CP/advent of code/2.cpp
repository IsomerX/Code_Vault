<<<<<<< HEAD
#include <bits/stdc++.h>
#include <fstream>

using namespace std;


int main()
{
    string line;
    ifstream myFile("input2.txt");
    map<string, int> m;
    if (myFile.is_open())
    {
        while (getline(myFile, line))
        {
            string a;
            string num;
            bool number = 0;
            for(auto x : line){
                if(x==' '){
                    number = 1;
                    continue;
                }
                if(!number){
                    a+=x;
                }
                else{
                    num += x;
                }
            }
            // cout << a <<" " << num << endl;
            m[a]+= stoi(num);
        }
        myFile.close();
    }
    
    int dow = 0;
    dow += m["down"] - m["up"];

    cout << dow * m["forward"] << endl;

    return 0;
=======
#include <bits/stdc++.h>
#include <fstream>

using namespace std;


int main()
{
    string line;
    ifstream myFile("input2.txt");
    map<string, int> m;
    if (myFile.is_open())
    {
        while (getline(myFile, line))
        {
            string a;
            string num;
            bool number = 0;
            for(auto x : line){
                if(x==' '){
                    number = 1;
                    continue;
                }
                if(!number){
                    a+=x;
                }
                else{
                    num += x;
                }
            }
            // cout << a <<" " << num << endl;
            m[a]+= stoi(num);
        }
        myFile.close();
    }
    
    int dow = 0;
    dow += m["down"] - m["up"];

    cout << dow * m["forward"] << endl;

    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}