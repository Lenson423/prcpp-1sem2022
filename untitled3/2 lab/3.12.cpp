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

    if (y > 2 * x) {
        result = tan(x) + x * x;
    } else if (y < 2 * x) {
        result = pow(fabs(x + y),3);
    } else {
        result = pow(x, 1/3) * sin(x);
    }

    cout << "Result is equal to " << result;
    return 0;
}