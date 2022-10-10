//5.	Проверить, является ли массив 1 перестановкой элементов массива 2.
// Created by lenso on 03.10.2022.
//Богдан Евгений

#include <iostream>
#include <vector>
#include "cmath"
#include <map>
#include "windows.h"

using std::cout, std::cin, std::endl, std::max, std::cos, std::vector, std::erase;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    vector<double> allElements = {12, 12.249, -45, 0, 0, 67.5, 78.1, -0.111, -12.78};
    vector<double> allElements2 = {12, 12.249, -45, 0, 0, 67.5, 78.1, -0.111, -12.78};
    int size1 = sizeof(allElements) / sizeof(allElements[0]);
    int size2 = sizeof(allElements2) / sizeof(allElements[0]);
    std::map<double, double> hash;

    for (int i = 0; i < size1; i++) {
        double x = allElements[i];
        hash[x]++;
    }

    for (int i = 0; i < size2; i++) {
        double x = allElements2[i];

        if (hash[x] == 0) {
            cout << "Не являются перестановками";
            return 0;
        }
        hash[x]--;
    }
    cout << "Массивы - перестановки";

    return 0;
}

