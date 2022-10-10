//9.	Последовательностью Фарея. Напечатать в порядке возрастания все простые несократимые дроби, заключенные между 0 и 1, знаменатели которых меньше заданного числа n.
// Created by lenso on 03.10.2022.
//Богдан Евгений

#include <iostream>
#include <vector>
#include "cmath"
#include <map>
#include "windows.h"

using std::cout, std::cin, std::endl, std::max, std::cos, std::vector, std::erase;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введите n:" << endl;
    cin >>n;
    int a = 0;
    int b = 1;
    int c = 1;
    int d = n;
    int p,q;
    cout << a << "/" <<b << " " << c << "/" << d << " ";
    while (!(d == 1 && c== 1)){
       p = (n + b) / d * c - a;
       q = (n + b) / d * d - b;
       a = c;
       b = d;
       c = p;
       d = q;
       cout << c << "/" << d << " ";
    }


    return 0;
}

