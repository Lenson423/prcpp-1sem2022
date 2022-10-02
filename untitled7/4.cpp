//Богдан Евгений
// Created by lenso on 26.09.2022.
//
#include <iostream>
#include "windows.h"
#include <cmath>

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите число r:" << endl;
    int radius;
    cin >> radius;

    //O(n)
    int result = 0;
    for(int y = 0; y <= radius; y++)
        result += int(sqrt(radius * radius - y * y));
    result = 4 * result + 1;
    if (result == 1){
        cout << "1 точка" << endl;
    }else {
        cout << result << " точек"<< endl;
    }

    // 0(n*n)
    int res = 0;
    for(int i = 0; i <= radius; i++) {
        for (int j = 1; j <= radius; j++) {
            if (i * i + j * j <= radius * radius) {
                res++;
            }
        }
    }
    cout << res * 4 + 1 << endl;

    // O(n)
    int result1 = 0;
    int counter = radius * radius;
    for (int i = 1; i <= counter; i += 4){
        result1 += counter / i;
        result1 -= counter / (i + 2);
    }
    result1 = 4 * result1 + 1;
    if (result1 == 1){
        cout << "1 точка" << endl;
    }else {
        cout << result << " точек"<< endl;
    }

    return 0;
}
