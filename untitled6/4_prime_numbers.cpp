//Богдан Евгений
// Created by lenso on 26.09.2022.
//Вывести все делители числа n.
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите количесвто чисел" << endl;
    int number;
    cin >> number;
    int counter = 0;
    int i = 2;
    while (true) {
        int flag = 1;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            cout << i << endl;
            ++counter;
        }
        ++i;
        if (counter == number) {
            break;
        }
    }
    return 0;
}
