#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
    string line;
    ifstream myFile("input1.txt");
    vector<int> a;
    if (myFile.is_open())
    {
        while (getline(myFile, line))
        {
            a.push_back(stoi(line));
        }
        myFile.close();
    }
    cout << a.size() << endl;
    int cnt = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i] > a[i-1])
            cnt++;
    }
    cout << cnt;
    return 0;
}