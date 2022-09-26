//Богдан Евгений
// Created by lenso on 26.09.2022.
//числа Мерсенна
#include <iostream>
#include "windows.h"
#include <cmath>

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите количество чисел" << endl;
    int number;
    cin >> number;
    for (int i = 1; i <= number; ++i){
        cout << pow (2, i) - 1 << " ";
    }
    return 0;
}
