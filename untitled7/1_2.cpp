//Богдан Евгений
// Created by lenso on 26.09.2022.
//
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите n:" << endl;
    unsigned int n;
    cin >> n;
    for (unsigned int i = n; --i + 1 > 0; ){
        cout << i << " ";
    }
    return 0;
}
