<<<<<<< HEAD
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
=======
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
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}