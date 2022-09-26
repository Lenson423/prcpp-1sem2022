//Богдан Евгений
// Created by lenso on 26.09.2022.
//Вывести сумму цифр заданного числа.
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите число:" << endl;
    unsigned int number;
    cin >> number;
    unsigned int sum;
    while (number > 0){
        sum += number % 10;
        number = (number - number % 10) / 10;
    }
    cout << sum;
    return 0;
}
