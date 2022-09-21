#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin, std::endl;

int main() {
    double x, y;
    cout << "Enter 2 numbers:" << endl;
    cin >> x >> y;
    double result;

    if (x / y > 0) {
        result = pow(x + log(fabs(y)), 3);
    } else if (x / y < 0) {
        result = 2 / 3 + log(fabs(sin(y)));
    } else {
        result = y;
    }

    cout << "Result is equal to " << result;
    return 0;
}