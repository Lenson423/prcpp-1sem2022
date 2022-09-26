//Богдан Евгений
// Created by lenso on 26.09.2022.
//Вывести все делители числа n.
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите целое число:" << endl;
    int number;
    cin >> number;

    if (number == 0){
        cout << "Ноль не имеет делителя";
        return 0;
    }

    if (number < 0){
        number = -number;}

    for (int i = 1; i <= number / 2; ++i){
        if (number % i == 0){
            cout << -i << endl;
            cout << i <<endl;
        }
    }
    cout << -number << endl;
    cout << number;

    return 0;
}
