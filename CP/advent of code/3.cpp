#include <bits/stdc++.h>
#include <fstream>

using namespace std;


int main()
{
    string line;
    ifstream myFile("input3.txt");
    vector<string> a;
    if (myFile.is_open())
    {
        while (getline(myFile, line))
        {  
            a.push_back(line);
        }
        myFile.close();
    }

    string teeth = "";

    for(int i = 0; i < a[0].length(); i++){
        int oe = 0;
        int ze = 0;
        for(int j = 0; j < a.size(); j++){
            if(a[j][i] == '1')
                oe++;
            else
                ze++;
        }
        if(oe > ze)
            teeth+='1';
        else
            teeth += '0';
    }

    string alt = "";
    for(auto x: teeth){
        if(x == '1')
            alt+='0';
        else
            alt+='1';
    }

    long long ans = bitset<64>(teeth).to_ullong() * bitset<64>(alt).to_ullong();

    cout << ans;
    
    return 0;
}