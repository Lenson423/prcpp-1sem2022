#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    cout << "Enter point coordinates:"<<endl;
    double x, y;
    cin >> x >> y;

    if (x > 0){
        if(y > 0){
            cout << "1 quadrant";
        }else{
            cout << "4 quadrant";
        }
    }else{
        if(y > 0){
            cout << "2 quadrant";
        }else{
            cout << "3 quadrant";
        }
    }
    return 0;
}


