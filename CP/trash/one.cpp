<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;

bool dfs(vector<vector<char>>& board, string word, int y, int x){
    for(auto r: board){
        for(auto j:r)
            cout << j << " ";
        cout << endl;
    }
    if(!word.size())
        return true;
    if(y >= board.size() || x >= board[0].size() ||  x < 0 || y < 0 || board[y][x] != word[0]){
        return false;
    }

    char c = board[y][x];
    
    board[y][x] = '#';

    string s = word.substr(1);

    bool f = dfs(board, s, y+1, x) || dfs(board, s, y-1, x) || dfs(board, s, y, x+1) || dfs(board, s, y, x-1);

    board[y][x] = c;

    return f;
}

bool exist(vector<vector<char>>& board, string word){
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[0].size(); j++){
            if(dfs(board, word, i, j)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<char>> a;
    for(int i = 0; i < 3; i++){
        vector<char> temp;
        for(int j = 0; j < 4; j++){
            char x;
            cin >> x;
            temp.push_back(x);
        }
        a.push_back(temp);
    }
    string word = "abcce";
    cout << exist(a, word) << endl;
    return 0;
=======
#include<bits/stdc++.h>

using namespace std;

bool dfs(vector<vector<char>>& board, string word, int y, int x){
    for(auto r: board){
        for(auto j:r)
            cout << j << " ";
        cout << endl;
    }
    if(!word.size())
        return true;
    if(y >= board.size() || x >= board[0].size() ||  x < 0 || y < 0 || board[y][x] != word[0]){
        return false;
    }

    char c = board[y][x];
    
    board[y][x] = '#';

    string s = word.substr(1);

    bool f = dfs(board, s, y+1, x) || dfs(board, s, y-1, x) || dfs(board, s, y, x+1) || dfs(board, s, y, x-1);

    board[y][x] = c;

    return f;
}

bool exist(vector<vector<char>>& board, string word){
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[0].size(); j++){
            if(dfs(board, word, i, j)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<char>> a;
    for(int i = 0; i < 3; i++){
        vector<char> temp;
        for(int j = 0; j < 4; j++){
            char x;
            cin >> x;
            temp.push_back(x);
        }
        a.push_back(temp);
    }
    string word = "abcce";
    cout << exist(a, word) << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}