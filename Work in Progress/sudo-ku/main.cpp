#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

#define ll long long
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)

void printb(vector<vector<int>> &a)
{
        for (auto i : a)
        {
                for (auto j : i)
                        cout << j << " ";
                cout << endl;
        }
}

bool isComplete(vector<vector<int>> &a)
{
        int rSum = 0, cSum = 0, bSum = 0;
        forn(i, 9)
        {
                forn(j, 9)
                {
                        rSum += a[i][j];
                }
                if (rSum != 45)
                {
                        return 0;
                }
                rSum = 0;
        }

        forn(i, 9)
        {
                forn(j, 9)
                {
                        cSum += a[j][i];
                }
                if (cSum != 45)
                {
                        return 0;
                }
                cSum = 0;
        }

        forn(i, 3)
        {
                forn(j, 3)
                {
                        forsn(k, 3 * i, 3 * i + 3)
                        {
                                forsn(l, 3 * j, 3 * j + 3)
                                {
                                        bSum += a[k][l];
                                }
                        }
                        if (bSum != 45)
                        {
                                return 0;
                        }
                        bSum = 0;
                }
        }

        return 1;
}

vector<bool> possibilities(vector<bool> row, vector<bool> col, vector<bool> box)
{
        vector<bool> result(9, 0);
        forn(i, 9)
        {
                result[i] = row[i] & col[i] & box[i];
        }

        return result;
}

int count(vector<bool> a)
{
        int tot = 0;
        for (auto i : a)
                if (i == 1)
                        tot++;
        return tot;
}

void setter(vector<vector<bool>> &a)
{
        for (auto i : a)
        {
                for (auto j : i)
                        j = 1;
        }
}

int main()
{
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
        vector<vector<int>> board(9, vector<int>(9, 0));

        forn(i, 9)
        {
                forn(j, 9)
                {
                        int x;
                        cin >> x;
                        board[i][j] = x;
                }
        }

        vector<vector<bool>> row_m(9, vector<bool>(9, 1)), col_m(9, vector<bool>(9, 1)), box_m(9, vector<bool>(9, 1));

        printb(board);

        cout << endl;

        int cnt = 0;

        forn(i, 9)
        {
                forn(j, 9)
                {
                        if (board[i][j] != 0)
                        {
                                row_m[i][board[i][j] - 1] = 0;
                                col_m[j][board[i][j] - 1] = 0;
                        }
                }
        }

        forn(i, 3)
        {
                forn(j, 3)
                {
                        forsn(k, 3 * i, 3 * i + 3)
                        {
                                forsn(l, 3 * j, 3 * j + 3)
                                {
                                        if (board[k][l] != 0)
                                        {
                                                box_m[i * 3 + j][board[k][l] - 1] = 0;
                                        }
                                }
                        }
                }
        }

        int last_zeros = -1;

        while (true)
        {
                forn(i, 9)
                {
                        forn(j, 9)
                        {
                                vector<bool> pos = possibilities(row_m[i], col_m[j], box_m[(i / 3) * 3 + j / 3]);

                                if (count(pos) == 1)
                                {
                                        forn(p, 9)
                                        {
                                                if (pos[p])
                                                {
                                                        board[i][j] = p + 1;
                                                        row_m[i][p] = 0;
                                                        col_m[j][p] = 0;
                                                        box_m[(i / 3) * 3 + j / 3][p] = 0;
                                                }
                                        }
                                }
                        }
                }

                forn(i, 9){
                        forn(j, 9)
                                col_m[i][j] = 1;
                }
                forn(i, 9){
                        forn(j, 9)
                                row_m[i][j] = 1;
                }
                forn(i, 9){
                        forn(j, 9)
                                box_m[i][j] = 1;
                }

                forn(i, 9)
                {
                        forn(j, 9)
                        {
                                if (board[i][j] != 0)
                                {
                                        row_m[i][board[i][j] - 1] = 0;
                                        col_m[j][board[i][j] - 1] = 0;
                                }
                        }
                }

                forn(i, 3)
                {
                        forn(j, 3)
                        {
                                forsn(k, 3 * i, 3 * i + 3)
                                {
                                        forsn(l, 3 * j, 3 * j + 3)
                                        {
                                                if (board[k][l] != 0)
                                                {
                                                        box_m[i * 3 + j][board[k][l] - 1] = 0;
                                                }
                                        }
                                }
                        }
                }
                int zeros = 0;
                for (auto i : board)
                {
                        for (auto j : i)
                                zeros += (j == 0) ? 1 : 0;
                }
                printb(board);
                cout << "0s: " << zeros << endl;

                if (last_zeros == zeros)
                        break;
                last_zeros = zeros;
                cnt++;
        }

        cout << "row: " << endl;

        forn(i, 9)
        {
                cout << i << "th row: ";
                forn(j, 9)
                {
                        cout << row_m[i][j] << " ";
                }
                cout << endl;
        }

        cout << "col: " << endl;

        forn(i, 9)
        {
                cout << i << "th row: ";
                forn(j, 9)
                {
                        cout << col_m[i][j] << " ";
                }
                cout << endl;
        }

        cout << "box: " << endl;

        forn(i, 3)
        {
                forn(j, 3)
                {
                        cout << i * 3 + j << "th row: ";
                        for (int k = 0; k < 9; k++)
                                cout << box_m[i * 3 + j][k] << " ";
                        cout << endl;
                }
        }

        return 0;
}