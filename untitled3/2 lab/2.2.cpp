#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    int month;
    cout << "Enter month's number:"<< endl;
    cin >> month;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days";
            break;
        case 2:
            cout << "28 days";
            break;
        default:
            cout << "It's not a month's number";
            break;
    }
    return 0;
}