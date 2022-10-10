//1.	Дан массив из n чисел. Найти средне-геометрическое значение положительных элементов и средне-арифметическое значение отрицательных элементов массива.
// Created by lenso on 03.10.2022.
//Богдан Евгений

#include <iostream>
#include <vector>
#include "cmath"

using std::cout, std ::cin, std::endl, std::max, std::cos, std::vector;

int main() {
    vector <double> all_elements  = {12, 12.349, -45, 0.0, 0.0, 67.5, 78.1, -0.111, -12.78};
    double positiveWork = 1;
    double negativeSum = 0;
    double counterPositive = 0;
    int counterNegative = 0;
    for (int i = 0; i < all_elements.size(); ++i){
        if (all_elements[i] < 0){
            ++counterNegative;
            negativeSum += all_elements[i];
        }
        if (all_elements[i] > 0){
            ++counterPositive;
            positiveWork *= all_elements[i];
        }
    }
    cout << positiveWork << endl;
    cout << counterPositive << endl;
    double averageGeometric = pow(positiveWork, (1 / counterPositive));
    double averageAlgebraic = negativeSum / counterNegative;
    cout << "Average geometric = " << averageGeometric << endl;
    cout << "Average algebraic = " << averageAlgebraic << endl;
    return 0;
}

