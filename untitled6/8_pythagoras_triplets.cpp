//Богдан Евгений
// Created by lenso on 26.09.2022.
//Пифагоровы тройки
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите количество чисел" << endl;
    int number;
    cin >> number;
    for (int i = 2; i <= number + 1; ++i){
        int a = i * i - 1;
        int b = 2 * i;
        int c = i * i +1;
        cout << "(" << a << ", " << b << ", " << c << ")" << endl;
    }
    return 0;
}
