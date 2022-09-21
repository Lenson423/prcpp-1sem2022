#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    cout << "Enter point coordinates:"<<endl;
    double x, y;
    cin >> x >> y;
    if (x == 0 and y == 0){
        cout << "1";
    }else if (x != 0 and y != 0){
        cout << "0";
    }else if (y == 0){
        cout << "2";
    }else if (x == 0){
        cout << "3";
    }
    return 0;
}


