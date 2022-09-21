#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin, std::endl;

int main() {
    int number;
    cout << "1 – дециметр, 2 – километр, 3 – метр, 4 – миллиметр, 5 – сантиметр" << endl;
    cout << "Enter a number:" << endl;
    cin >> number;

    double value;
    double answer_value;
    switch (number) {
        case 1:
            answer_value = value / 10;
            cout << "Value is equal to " << answer_value;
            break;
        case 2:
            answer_value = value * 1000;
            cout << "Value is equal to " << answer_value;
            break;
        case 3:
            answer_value = value ;
            cout << "Value is equal to " << answer_value;
            break;
        case 4:
            answer_value = value / 1000;
            cout << "Value is equal to " << answer_value;
            break;
        case 5:
            answer_value = value / 100;
            cout << "Value is equal to " << answer_value;
            break;
        default:
            cout << "Number out of range";
            break;
    }
    return 0;
}