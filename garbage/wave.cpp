<<<<<<< HEAD
#include<bits/stdc++.h>
#ifdef _WIN32
#include <windows.h>
#else
#include<unistd.h>
#endif

using namespace std;
const short int SIZEE = 10;

char arr[SIZEE][SIZEE] = {0};
void display(){
    for(int i = 0; i < SIZEE; i++){
        for(int j = 0; j < SIZEE; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void fill(char c, int wavePos){
    cout << "\033[H";
    for(int i = 0; i < SIZEE; i++){
        for(int j = 0; j < SIZEE; j++){
            if(i==wavePos){
                arr[i][j] = '/';
                continue;
            }
            arr[i][j] = c;
        }
    }
}

int main(){
    for(int i = 0; i < SIZEE; i++){\
        // Sleep(150);
        fill('*', i);
        display();
    }
    display();
    return 0;
=======
#include<bits/stdc++.h>
#ifdef _WIN32
#include <windows.h>
#else
#include<unistd.h>
#endif

using namespace std;
const short int SIZEE = 10;

char arr[SIZEE][SIZEE] = {0};
void display(){
    for(int i = 0; i < SIZEE; i++){
        for(int j = 0; j < SIZEE; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void fill(char c, int wavePos){
    cout << "\033[H";
    for(int i = 0; i < SIZEE; i++){
        for(int j = 0; j < SIZEE; j++){
            if(i==wavePos){
                arr[i][j] = '/';
                continue;
            }
            arr[i][j] = c;
        }
    }
}

int main(){
    for(int i = 0; i < SIZEE; i++){\
        // Sleep(150);
        fill('*', i);
        display();
    }
    display();
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}