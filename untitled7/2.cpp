//Богдан Евгений
// Created by lenso on 26.09.2022.
//
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите number:" << endl;
    unsigned long int number;
    cin >> number;

    if (number <= 0) {
        cout << "Последовательность никогда не достигнет 1";
        return 0;
    }

    if (number == 1){
        cout << "Последовательность начинается с единицы.";
        return 0;
    }

    unsigned long int steps = 0;
    unsigned long int n = number;
    while (steps <= 100'000){
        if (n % 2 == 0){
            n = n / 2;
        }else{
            n = 3 * n + 1;
        }
        if (n == 1){
            cout << "Для number = " << number << " поселедовательность превращается в единицу за " << steps + 1 << " шагов";
            return 0;
        }
        ++steps;
    }
    cout << "За первые 100'000 шагов последовательность не достигает 1." << steps;

    return 0;
}
