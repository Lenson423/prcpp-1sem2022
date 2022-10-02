//Богдан Евгений
// Created by lenso on 26.09.2022.
//
#include <iostream>
#include "windows.h"
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите n:" << endl;
    int n = 64;
    cin >> n;
    SetConsoleOutputCP(CP_UTF8);
    int count = 0;
    for (unsigned long long j = 1; count <= n ;j = (j xor (2*j))) { //Числа в 2-ом представлении треугольника Серпинского для n = 64
        string result;
        unsigned long long k = j;
        while (k > 0) {
            int digit;
            digit = k % 2;
            result += std::to_string(digit);
            k = k / 2;
        }
        string reversed(result.rbegin(), result.rend());
        cout << reversed<< endl;
        ++count;
    }

    int count1 = 0;
    for (unsigned long long j = 1; count1 < n; j = (j xor (2*j))) { //Числа в 10-ом представлении треугольника Серпинского для n = 64
        cout << j << endl;
        ++count1;
        }

    return 0;
}
