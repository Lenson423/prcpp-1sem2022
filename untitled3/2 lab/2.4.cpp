#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    int number;
    cout << "Enter a number:"<< endl;
    cin >> number;
    switch (number) {
        case 1:
            cout << "Плохо";
            break;
        case 2:
            cout << "Неудовлетворительно";
            break;
        case 3:
            cout << "Удовлетворительно";
            break;
        case 4:
            cout << "Хорошо";
            break;
        case 5:
            cout << "Отлично";
            break;
        default:
            cout<< "Number out of range";
            break;
    }
    return 0;
}