//Богдан Евгений
// Created by lenso on 26.09.2022.
//Перевести данное неотрицательное число n в 16-ричную систему счисления

#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите натуральное число:" << endl;
    unsigned int number;
    cin >> number;
    cout << "Получившееся число:" << endl;
    while (number > 0) {
        int digit;
        digit = number % 16;
        cout << digit << " ";
        number = number / 16;
    }
    return 0;
}
