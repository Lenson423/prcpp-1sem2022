#include "windows.h"
#include "iostream"
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cin >> n;
    switch (n) {
        case 1:
            cout<< "Hello";
            break;
        case 2:
            cout<<"Hello there";
            break;
        default:
            cout<<"right";
            break;
    }
    return 0;
}