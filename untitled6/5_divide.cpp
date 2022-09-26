//Богдан Евгений
// Created by lenso on 26.09.2022.
//Дано натуральное число. Разложить его на простые множители.

#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите натуральное число:" << endl;
    unsigned int number;
    cin >> number;
    for (int i = 2; i <= number; i++) {
        if (number % i == 0) {
            while (number % i == 0) {
                cout << i << endl;
                number /= i;
            }
        }
    }
    return 0;
}
