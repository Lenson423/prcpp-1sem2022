//Богдан Евгений
// Created by lenso on 26.09.2022.
//
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите n:" << endl;
    int n;
    cin >> n;
    while (n){
        cout << 1;
        --n;
    }

    return 0;
}
