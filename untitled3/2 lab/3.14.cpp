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

    if (x > 0) {
        result = pow(log(x), 3);
    } else if (x < 0) {
        result = tan(pow(x, 3)) + y * x;
    } else {
        result = fabs(y);
    }

    cout << "Result is equal to " << result;
    return 0;
}