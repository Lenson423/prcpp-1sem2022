#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {

    int a, b, c;
    cout <<  "1 – сложение, 2 – вычитание, 3 – умножение, 4 – деление" <<endl;
    cin >> c;

    cout << "Enter 2 numbers:" << endl;
    cin >> a >> b;

    int Result;

    switch (c) {
        case 1:
            Result = a + b;
            cout << "A + B = " << Result;
            break;
        case 2:
            Result = a - b;
            cout << "A - B = " << Result;
            break;
        case 3:
            Result = a * b;
            cout << "A * B = " << Result;
            break;
        case 4:
            Result = a / b;
            cout << "A / B = " << Result;
            break;
        default:
            cout<< "Number out of range";
            break;
    }
    return 0;
}