//
// Created by lenso on 24.09.2022.
//
#include <iostream>
#include "windows.h"
#include <cmath>

using std::cout, std::cin, std::endl;

double epsilon = pow(10, -9);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Последовательно введите координаты центра 1 окружности и ее радиус" <<endl;
    double x0, y0, R0;
    cin >> x0 >> y0 >> R0;
    cout << "Последовательно введите координаты центра 2 окружности и ее радиус" <<endl;
    double x1, y1, R1;
    cin >> x1 >> y1 >> R1;

    if (R1 <= 0 or R0 <= 0){
        cout << "Радиус не может быть отрицательным";
        return 0;
    }

    double distance = pow((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0), 0.5);
    if (distance <= epsilon and fabs(R1 - R0) <= epsilon){
        cout << "Окружности совпадают.";
    }else if (distance - R0 - R1 >= epsilon or distance - fabs(R0-R1) <= epsilon){
        cout << "Окружности не касаются друг друга";
    }else{ //смотреть приложеный рисунок
        double OP = (R0 * R0 - R1 * R1 + distance * distance) / (2 * distance);
        double height = pow(R0 * R0 - OP * OP, 0.5); // PB и PA на рисунке
        double Ox_P = x0 + OP * (x1 - x0) / distance; // координата проекции Р на ось абсцисс
        double Oy_P = y0 + OP * (y1 - y0) / distance; // координата проекции Р на ось ординат
        double deltaForX = height * (y1 - y0) / distance;
        double deltaForY = height * (x1 - x0) / distance;

        double x2 = Ox_P + deltaForX;
        double y2 = Oy_P - deltaForY;

        double x3 = Ox_P - deltaForX;
        double y3 = Oy_P + deltaForY;
        if (fabs(x3 - x2) <= epsilon and fabs(y3 - y2) <= epsilon){
            cout << "Окружности касаются в одной точке с координатами " << "(" << x2 << ";" << y2 << ")" << endl;
        }else{
            cout << "Окружности пересекаются в 2 точках, координаты первой " << "(" << x2 << ";" << y2 << ")" << endl;
            cout << "Второй: " << "(" << x3 << ";" << y3 << ")" << endl;
        }
    }
    return 0;
}

