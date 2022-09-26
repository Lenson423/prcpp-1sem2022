//Богдан Евгений
// Created by lenso on 26.09.2022.
//Вычислить "Уровень палиндромности" заданого натурального числа n.
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите натуральное число:" << endl;
    unsigned int number;
    cin >> number;

    long tmp, reversedNumber;
    int digit;
    int count = 0;

    //bool notFind = true;
    //while(notFind){
    while(true){
        tmp = number;
        reversedNumber = 0;
        while (tmp > 0){
            digit = tmp % 10;
            tmp /= 10;
            reversedNumber = reversedNumber * 10 + digit;
        }
        if (number == reversedNumber){
            cout << count;
            //notFind = false;
            break;
        } else {
            number += reversedNumber;
            count++;
        }
    }

    return 0;
}
