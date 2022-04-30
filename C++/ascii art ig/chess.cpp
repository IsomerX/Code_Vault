#include<iostream>
#include<vector>
#include<windows.h>

using namespace std;

class piece{
    char p;
    public:
        piece(){
        }
        void assign(char a){
            p = a;
        }
        char what(){
            return p;
        }
};

class grid{
    int size;
    vector<vector<piece>> imp;
    char cmain;
    public:
        grid(int n, char character){
            size = n;
            imp = vector<vector<piece>>(n, vector<piece>(n));
            for(int i = 0; i < size; i++){
                for(int j = 0; j < size; j++)
                    imp[i][j].assign(character);
            }
            cmain = character;
        }
        // complete this one
        void line(int x1, int y1, int x2, int y2, char c){
            int j = y1;
            if(x1 == x2){
                for(int i = y1; i <= y2; i++)
                    imp[i][x1].assign(c);
            }
            else if(y1 == y2){
                for(int i = x1; i <= x2; i++)
                    imp[y1][i].assign(c);
            }
            else
                for(int i = x1; i <= x2, j <= y2; i++,j++){
                    imp[j][i].assign(c);
                }
        }
        
        void rectangle(int x1, int y1, int x2, int y2, char c){
            system("Color 0A");  
            for(int i = y1; i <= y2;  i++){
                for(int j = x1; j <= x2; j++){
                    imp[i][j].assign(c);
                }
            }
        }

        void moveSq(int x1, int y1, int x2, int y2, int sqsize){
            char c = 3;
            bool done = 0;
            if(x1 == x2 && y1 == y2)
                done = 1;
            show();
            while(!done){
                if(x1 > x2 && y1 > y2){
                    for(int i = y1; i <= y1 + sqsize;  i++){
                        for(int j = x1; j <= x1+sqsize; j++){
                            imp[i][j].assign(cmain);
                        }
                    }
                    --y1,--x1;
                    for(int i = y1; i <= y1+sqsize;  i++){
                        for(int j = x1; j <= x1 + sqsize; j++){
                            imp[i][j].assign(c);
                        }
                    }
                }
                else if(x1 < x2 && y1 > y2){
                    for(int i = y1; i <= y1 + sqsize;  i++){
                        for(int j = x1; j <= x1+sqsize; j++){
                            imp[i][j].assign(cmain);
                        }
                    }
                    --y1,++x1;
                    for(int i = y1; i <= y1+size;  i++){
                        for(int j = x1; j <= x1 + sqsize; j++){
                            imp[i][j].assign(c);
                        }
                    }
                }
                else if(x1 > x2 && y1 < y2){
                    for(int i = y1; i <= y1 + sqsize;  i++){
                        for(int j = x1; j <= x1+sqsize; j++){
                            imp[i][j].assign(cmain);
                        }
                    }
                    ++y1,--x1;
                    for(int i = y1; i <= y1+sqsize;  i++){
                        for(int j = x1; j <= x1 + sqsize; j++){
                            imp[i][j].assign(c);
                        }
                    }
                }
                else if(x1 < x2 && y1 < y2){
                    for(int i = y1; i <= y1 + sqsize;  i++){
                        for(int j = x1; j <= x1+sqsize; j++){
                            imp[i][j].assign(cmain);
                        }
                    }
                    ++y1,++x1;
                    for(int i = y1; i <= y1+sqsize;  i++){
                        for(int j = x1; j <= x1 + sqsize; j++){
                            imp[i][j].assign(c);
                        }
                    }
                }
                Sleep(800);
                show();
                if(x1 == x2 && y1 == y2)
                    done = 1;
            }
        }

        void show(){
            system("CLS");
            for(int i = 0; i < size; i++){
                for(int j = 0; j < size; j++)
                    cout << imp[i][j].what() << " ";
                cout << endl;
            }
            // cout << endl << endl;
        }

        void clearall(){
            for(int i = 0; i < size; i++){
                for(int j = 0; j < size; j++)
                    imp[i][j].assign(cmain);
            }
        }
};

int main(){
    int n = 10, u=0;
    system("CLS");
    grid focus(n, 'a');
    focus.line(0,0,5,5,3);
    focus.line(0,0,5,0,3);
    focus.line(3,2,6,5,3);
    // focus.rectangle(3,2,7,9,'B');
    // focus.moveSq(5,5,0,0,3);
    // focus.clearall();
    // focus.moveSq(1,2,3,4,3);
    focus.show();
    return 0;
}
























    // vector<vector<piece>> a(n, vector<piece>(n));
    // while(1){
        
    //     if(u%2 == 0){
    //         for(int i = 0; i < n; i++){
    //             for(int j = 0; j < n; j++){
    //                 if((i+j)%2 == 0)
    //                     a[i][j].assign('@');
    //                 else
    //                     a[i][j].assign('#');
    //             }
    //         }
    //         for(int i = 0; i < n; i++){
    //             for(int j = 0; j < n; j++)
    //                 cout << a[i][j].what() << " ";
    //             cout << endl;
    //         }
    //     }
    //     else{
    //         for(int i = 0; i < n; i++){
    //             for(int j = 0; j < n; j++){
    //                 if((i+j)%2 == 1)
    //                     a[i][j].assign(u%256);
    //                 else
    //                     a[i][j].assign('#');
    //             }
    //         }
    //         for(int i = 0; i < n; i++){
    //             for(int j = 0; j < n; j++)
    //                 cout << a[i][j].what() << " ";
    //             cout << endl;
    //         }
    //     }
    //     u++;
    //     Sleep(500);
    // }