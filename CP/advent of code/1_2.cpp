<<<<<<< HEAD
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
    int sum = a[0] + a[1] + a[2];

    int pos = 3;
    while(pos != a.size()){
        int new_sum = sum - a[pos - 3] + a[pos];
        if(new_sum > sum){
            cnt++;
        }
        pos++;
    }
    cout << cnt;
    return 0;
=======
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
    int sum = a[0] + a[1] + a[2];

    int pos = 3;
    while(pos != a.size()){
        int new_sum = sum - a[pos - 3] + a[pos];
        if(new_sum > sum){
            cnt++;
        }
        pos++;
    }
    cout << cnt;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}