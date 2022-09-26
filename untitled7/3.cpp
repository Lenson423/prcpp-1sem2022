//Богдан Евгений
// Created by lenso on 26.09.2022.
//
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите 16-значный номер:" << endl;
    string cardNumber;
    cin >> cardNumber;
    int digit;
    int sum = 0;
    for (int i = 15; i >= 0; i--){
        digit = cardNumber[i] - '0';
        if ((i + 1) % 2 == 1){
            digit = digit * 2;
        }
        if (digit > 9){
            digit = digit - 9;
        }

        sum = sum + digit;
    }

    if (sum % 10 == 0){
         cout << "Карта действительна";
    }else{
        cout << "Карта не действительна";
    }

    return 0;
}
