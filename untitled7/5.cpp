//Богдан Евгений
// Created by lenso on 26.09.2022.
//
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int count = 0;
    for (long long j = 1; count <= 63;j = (j xor (2*j))) { //Это будет треугольник Серпинского для n = 63
        string result;
        long long k = j;
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
    for (long long j = 1; count1 < 63;j = (j xor (2*j))) { //Это будет треугольник Серпинского для n = 63
        cout << j << endl;
        ++count1;
        }

    return 0;
}
