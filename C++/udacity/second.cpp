#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream is("./temp.txt");

    char c;
    while(is.get(c))
        cout << c;
    if(is.eof())
        cout << "[EoF reached]\n";
    else
        cout << "[error reading]\n";

    is.close();
    return 0;
}