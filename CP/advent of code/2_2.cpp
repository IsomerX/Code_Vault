#include <bits/stdc++.h>
#include <fstream>

using namespace std;


int main()
{
    string line;
    ifstream myFile("input2.txt");
    map<string, int> m;
    int aim = 0;
    int hor = 0;
    int vir = 0;
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
            if(a == "down"){
                aim += stoi(num);
            }
            else if(a == "up"){
                aim -= stoi(num);
            }
            else{
                hor += stoi(num);
                vir += aim * stoi(num);
            }
        }
        myFile.close();
    }
    
    cout << hor * vir << endl;
    return 0;
}