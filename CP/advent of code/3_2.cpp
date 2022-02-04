#include <bits/stdc++.h>
#include <fstream>

using namespace std;

bool compare(string base, string iter){
    for(int i = 0; i < base.length(); i++){
        if(base[i] != iter[i])
            return false;
    }
    return true;
}

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

    vector<string> temp1(a);

    int pos = 0;

    while(temp1.size() != 1){
        int ze{0}, oe{0};
        vector<string> temp;
        for(int i=0; i < temp1.size(); i++){
            if(temp1[i][pos] == '1')
                oe++;
            else
                ze++;
        }
        // char choice = '1'?oe>=ze:'0';
        char choice;
        if(oe>=ze)
            choice = '1';
        else
            choice = '0';
        for(auto i : temp1){
            if(i[pos] == choice)
                temp.push_back(i);
        }
        temp1 = temp;
        pos++;
    }


    vector<string> temp2(a);

     pos = 0;

    while(temp2.size() != 1){
        int ze{0}, oe{0};
        vector<string> temp;
        for(int i=0; i < temp2.size(); i++){
            if(temp2[i][pos] == '1')
                oe++;
            else
                ze++;
        }
        // char choice = '1'?oe>=ze:'0';
        char choice;
        if(oe>=ze)
            choice = '0';
        else
            choice = '1';
        for(auto i : temp2){
            if(i[pos] == choice)
                temp.push_back(i);
        }
        temp2 = temp;
        pos++;
    }

    cout << temp1[0] << endl;
    cout << temp2[0] << endl;

    // cout << ans1 << " " << ans2 << endl;

    long long ans = bitset<64>(temp1[0]).to_ullong() * bitset<64>(temp2[0]).to_ullong();

    cout << ans;
    
    return 0;
}