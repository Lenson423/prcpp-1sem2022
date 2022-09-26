//Богдан Евгений
// Created by lenso on 26.09.2022.
//Вычислить количество единичных бит числа.
//сделать 2 способ
//отрицательное число представлено в отдельном виде
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите натуральное число:" << endl;
    int number;
    cin >> number;
    int count;
    unsigned mask = 0x80000000;
    for (count = 0; number != 0; number = number << 1)
    {
        if ((number & mask)!=0)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
