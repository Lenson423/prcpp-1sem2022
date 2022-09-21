//
// Created by lenso on 21.09.2022.
//
#include <iostream>
#include "windows.h"
#include <cmath>

using std::cout, std::cin, std::endl;
double epsilon = (pow(10,-12));

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Последовательно введите a1, b1, a2, b2" << endl;
    double a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    double angel;
    if (fabs(a2 - a1)<epsilon){
        angel = 0;
        cout << "Прямые параллельны, т.е.  угол между ними " << angel << " градусов.";
    }else if (fabs(1/a2 + a1)<epsilon){
        angel = 90;
        cout << "Прямые перпендикулярны, т.е угол между ними " << angel << " градусов.";
    }else{
        angel = atan(fabs((a2 - a1) / (1 + a2 * a1))) * 180 / M_PI;
        cout << "Угол между прямыми равен " << angel << " градус(ов).";
    }
    return 0;
}
