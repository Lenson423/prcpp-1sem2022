//Богдан Евгений
// Created by lenso on 26.09.2022.
//числа Фибоначчи
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    long int a0 = 0;
    long int a1 = 1;
    cout << "Введите количество чисел" << endl;
    long int number;
    cin >> number;
    if (number == 1){
        cout << "0";
        return 0;
    }
    if (number == 2){
        cout << "0 1";
        return 0;
    }
    for (int i = 0; i <= number - 1 and i <= 46; i++) {
            cout << a0 << " ";
            int tmp = a0;
            a0 = a1;
            a1 += tmp;
            if (i == 46){
                cout << endl << "Вывод далее невозможен";
            }
         }
    return 0;
    }
