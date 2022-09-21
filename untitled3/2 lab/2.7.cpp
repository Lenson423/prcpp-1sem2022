#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin, std::endl;

int main() {
    int number;
    cout << "1 – килограмм, 2 – миллиграмм, 3 – грамм, 4 – тонна, 5 – центнер" << endl;
    cout << "Enter a number:" << endl;
    cin >> number;

    double M;
    double answer_value;
    switch (number) {
        case 1:
            answer_value = M ;
            cout << "Value is equal to " << answer_value;
            break;
        case 2:
            answer_value = M / 1000'000;
            cout << "Value is equal to " << answer_value;
            break;
        case 3:
            answer_value = M / 1000;
            cout << "Value is equal to " << answer_value;
            break;
        case 4:
            answer_value = M * 1000;
            cout << "Value is equal to " << answer_value;
            break;
        case 5:
            answer_value = M * 100;
            cout << "Value is equal to " << answer_value;
            break;
        default:
            cout << "Number out of range";
            break;
    }
    return 0;
}