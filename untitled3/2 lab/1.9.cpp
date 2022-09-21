#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    cout << "Enter 2 numbers"<<endl;
    double x, y;
    cin >> x >> y;
    if (x < y){
        x = y;
        cout << "x = " << x << ", y = "<< y;
    }else if(x > y) {
        y = x;
        cout << "x = " << x << ", y = "<< y;
    }else{
        x = 0;
        y = 0;
        cout << "x = " << x << ", y = "<< y;
    }

    return 0;
}



