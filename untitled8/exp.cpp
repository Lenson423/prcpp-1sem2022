//
// Created by lenso on 05.10.2022.
//
//6.	Переставить элементы массива в обратном порядке без дополнительных массивов.
// Created by lenso on 03.10.2022.
//Богдан Евгений

#include <iostream>
#include <vector>
#include "cmath"

using std::cout, std ::cin, std::endl, std::max, std::cos, std::vector, std::erase;

int main() {
    int n = 120;
    std::vector<int> bace = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> numbers = {};
    for (int i = 0; n > 0; ++i){
        numbers[i] = n % 10;
        n /= 10;
    }

    for (int i = 0; i < numbers.size(); ++i){
        cout << i << " : " << numbers[i]<< endl;
    }
    return 0;
}

