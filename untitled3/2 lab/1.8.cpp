#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    cout << "Enter 2 numbers"<<endl;
    int x, y;
    cin >> x >> y;
    if (x != y){
        int a = x + y;
        x = a;
        y = a;
        cout << "x = " << x << ", y = "<< y;
    }else{
        x = 0;
        y = 0;
        cout << "x = " << x << ", y = "<< y;
    }

    return 0;
}



