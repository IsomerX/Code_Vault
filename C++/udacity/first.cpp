<<<<<<< HEAD
#include <bits/stdc++.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

void display(bool a[5][3], int k)
{
    for (int j = 0; j < 3; j++)
    {
        cout << (a[k][j] ? "1" : " ") << ' ';
    }
    cout << ' ';
}

int main()
{
    bool n_0[5][3] = {{1, 1, 1},
                      {1, 0, 1},
                      {1, 0, 1},
                      {1, 0, 1},
                      {1, 1, 1}};

    bool n_1[5][3] = {{1, 1, 0},
                      {0, 1, 0},
                      {0, 1, 0},
                      {0, 1, 0},
                      {1, 1, 1}};

    bool n_2[5][3] = {{1, 1, 1},
                      {0, 0, 1},
                      {1, 1, 1},
                      {1, 0, 0},
                      {1, 1, 1}};

    bool n_3[5][3] = {{1, 1, 1},
                      {0, 0, 1},
                      {1, 1, 1},
                      {0, 0, 1},
                      {1, 1, 1}};

    bool n_4[5][3] = {{1, 0, 1},
                      {1, 0, 1},
                      {1, 1, 1},
                      {0, 0, 1},
                      {0, 0, 1}};

    bool n_5[5][3] = {{1, 1, 1},
                      {1, 0, 0},
                      {1, 1, 1},
                      {0, 0, 1},
                      {1, 1, 1}};

    bool n_6[5][3] = {{1, 1, 1},
                      {1, 0, 0},
                      {1, 1, 1},
                      {1, 0, 1},
                      {1, 1, 1}};

    bool n_7[5][3] = {{1, 1, 1},
                      {0, 0, 1},
                      {0, 0, 1},
                      {0, 1, 0},
                      {1, 0, 0}};

    bool n_8[5][3] = {{1, 1, 1},
                      {1, 0, 1},
                      {1, 1, 1},
                      {1, 0, 1},
                      {1, 1, 1}};

    bool n_9[5][3] = {{1, 1, 1},
                      {1, 0, 1},
                      {1, 1, 1},
                      {0, 0, 1},
                      {1, 1, 1}};

    string example = "8448362122";

    for (int k = 0; k < 5; k++)
    {

        for (auto i : example)
        {
            switch (i)
            {
            case '0':
                display(n_0, k);
                break;
            case '1':
                display(n_1, k);
                break;
            case '2':
                display(n_2, k);
                break;
            case '3':
                display(n_3, k);
                break;
            case '4':
                display(n_4, k);
                break;
            case '5':
                display(n_5, k);
                break;
            case '6':
                display(n_6, k);
                break;
            case '7':
                display(n_7, k);
                break;
            case '8':
                display(n_8, k);
                break;
            case '9':
                display(n_9, k);
                break;

            default:
                break;
            }
        }
        cout << endl;
    }

    int r = 100;
    int time_delay = 200;

    while(r--){
        cout << '|';
        Sleep(time_delay);
        cout << '\b';
        cout << '/';
        Sleep(time_delay);
        cout << '\b';
        cout << '-';
        Sleep(time_delay);
        cout << '\b';
        cout << '\\';
        Sleep(time_delay);
        cout << '\b';
    }
=======
#include <bits/stdc++.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

void display(bool a[5][3], int k)
{
    for (int j = 0; j < 3; j++)
    {
        cout << (a[k][j] ? "1" : " ") << ' ';
    }
    cout << ' ';
}

int main()
{
    bool n_0[5][3] = {{1, 1, 1},
                      {1, 0, 1},
                      {1, 0, 1},
                      {1, 0, 1},
                      {1, 1, 1}};

    bool n_1[5][3] = {{1, 1, 0},
                      {0, 1, 0},
                      {0, 1, 0},
                      {0, 1, 0},
                      {1, 1, 1}};

    bool n_2[5][3] = {{1, 1, 1},
                      {0, 0, 1},
                      {1, 1, 1},
                      {1, 0, 0},
                      {1, 1, 1}};

    bool n_3[5][3] = {{1, 1, 1},
                      {0, 0, 1},
                      {1, 1, 1},
                      {0, 0, 1},
                      {1, 1, 1}};

    bool n_4[5][3] = {{1, 0, 1},
                      {1, 0, 1},
                      {1, 1, 1},
                      {0, 0, 1},
                      {0, 0, 1}};

    bool n_5[5][3] = {{1, 1, 1},
                      {1, 0, 0},
                      {1, 1, 1},
                      {0, 0, 1},
                      {1, 1, 1}};

    bool n_6[5][3] = {{1, 1, 1},
                      {1, 0, 0},
                      {1, 1, 1},
                      {1, 0, 1},
                      {1, 1, 1}};

    bool n_7[5][3] = {{1, 1, 1},
                      {0, 0, 1},
                      {0, 0, 1},
                      {0, 1, 0},
                      {1, 0, 0}};

    bool n_8[5][3] = {{1, 1, 1},
                      {1, 0, 1},
                      {1, 1, 1},
                      {1, 0, 1},
                      {1, 1, 1}};

    bool n_9[5][3] = {{1, 1, 1},
                      {1, 0, 1},
                      {1, 1, 1},
                      {0, 0, 1},
                      {1, 1, 1}};

    string example = "8448362122";

    for (int k = 0; k < 5; k++)
    {

        for (auto i : example)
        {
            switch (i)
            {
            case '0':
                display(n_0, k);
                break;
            case '1':
                display(n_1, k);
                break;
            case '2':
                display(n_2, k);
                break;
            case '3':
                display(n_3, k);
                break;
            case '4':
                display(n_4, k);
                break;
            case '5':
                display(n_5, k);
                break;
            case '6':
                display(n_6, k);
                break;
            case '7':
                display(n_7, k);
                break;
            case '8':
                display(n_8, k);
                break;
            case '9':
                display(n_9, k);
                break;

            default:
                break;
            }
        }
        cout << endl;
    }

    int r = 100;
    int time_delay = 200;

    while(r--){
        cout << '|';
        Sleep(time_delay);
        cout << '\b';
        cout << '/';
        Sleep(time_delay);
        cout << '\b';
        cout << '-';
        Sleep(time_delay);
        cout << '\b';
        cout << '\\';
        Sleep(time_delay);
        cout << '\b';
    }
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}