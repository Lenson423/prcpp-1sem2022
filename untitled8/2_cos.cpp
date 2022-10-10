//Богдан Евгений
#include <iostream>
#include <vector>
#include "cmath"

using std::cout, std ::cin, std::endl, std::max, std::cos;

int main() {
    double x;
    cin >> x;
    cout << max(0., cos(x * 3));
    return 0;
}

