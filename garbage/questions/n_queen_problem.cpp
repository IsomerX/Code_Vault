<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

bool check(vector<vector<bool>>& board, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 1){
                for(int k = i+1; k < n; k++){
                    if(board[k][j] == 1){
                        return false;
                    }
                }
                for(int k = j+1; k < n; k++){
                    if(board[i][k] == 1){
                        return false;
                    }
                }
                int k = i+1;
                int p = j+1;
                while(k < n && p < n){
                    if(board[k][p])
                        return false;
                    k++;
                    p++;
                }
                k = i-1;
                p = j+1;
                while(k >= 0 && p < n){
                    if(board[k][p])
                        return false;
                    k--;
                    p++;
                }
            }
        }
    }
    return true;
}

void filler(int row, vector<vector<bool>>& board, int n){
    if(row == n){
        for(auto i : board){
            for(auto j : i){
                cout << j << " ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

    for(int i = 0; i < n; i++){
        board[row][i] = 1;
        if(check(board, n)){
            filler(row+1, board, n);
        }
        board[row][i] = 0;
    }
    return;
}

int main()
{
    printf("Enter n \n");
    int n; 
    cin >> n;
    vector<vector<bool>> board(n, vector<bool>(n, 0));

    filler(0, board, n);

    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

bool check(vector<vector<bool>>& board, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 1){
                for(int k = i+1; k < n; k++){
                    if(board[k][j] == 1){
                        return false;
                    }
                }
                for(int k = j+1; k < n; k++){
                    if(board[i][k] == 1){
                        return false;
                    }
                }
                int k = i+1;
                int p = j+1;
                while(k < n && p < n){
                    if(board[k][p])
                        return false;
                    k++;
                    p++;
                }
                k = i-1;
                p = j+1;
                while(k >= 0 && p < n){
                    if(board[k][p])
                        return false;
                    k--;
                    p++;
                }
            }
        }
    }
    return true;
}

void filler(int row, vector<vector<bool>>& board, int n){
    if(row == n){
        for(auto i : board){
            for(auto j : i){
                cout << j << " ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

    for(int i = 0; i < n; i++){
        board[row][i] = 1;
        if(check(board, n)){
            filler(row+1, board, n);
        }
        board[row][i] = 0;
    }
    return;
}

int main()
{
    printf("Enter n \n");
    int n; 
    cin >> n;
    vector<vector<bool>> board(n, vector<bool>(n, 0));

    filler(0, board, n);

    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}