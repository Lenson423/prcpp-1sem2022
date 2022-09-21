#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    cout << "Enter 3 numbers"<<endl;
    double x, y, z;
    cin >> x >> y >> z;
    if (x < y <z or z < y < x){
        x = 2 * x;
        y = 2 * y;
        z = 2 * z;
        cout << "x = " << x << ", y = "<< y << ", z =" << z;
    }else {
        x = -x;
        y = -y;
        z = -z;
        cout << "x = " << x << ", y = "<< y << ", z =" << z;
    }

    return 0;
}


