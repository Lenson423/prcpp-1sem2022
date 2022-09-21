#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    int numMonth;
    cout << "Enter a number of month" << endl;
    cin >> numMonth;
    switch (numMonth) {
        case 12:
        case 1:
        case 2:
            cout << "Winter";
            break;
        case 3:
        case 4:
        case 5:
            cout << "Spring";
            break;
        case 6:
        case 7:
        case 8:
            cout << "Summer";
            break;
        case 9:
        case 10:
        case 11:
            cout << "Autumn";
            break;
        default:
            cout << "It's not a month's number";
            break;
    }
    return 0;
}


