//3.	Дан массив из n чисел. Не используя вспомогательный массив поменять местами элементы таким образом, чтобы сначала шли отрицательные элементы, затем нулевые, потом положительные элементы. Взаимное расположение элементов в своих категориях должно остаться неизменным.
// Created by lenso on 03.10.2022.
//Богдан Евгений


#include <iostream>
#include <vector>
#include "cmath"

using std::cout, std ::cin, std::endl, std::max, std::cos, std::vector, std::erase;

int main() {
    vector <double> allElements  = {12, -3, 12.349, -45, 0, 0, 67.5, 78.1, -0.111, -12.78, 34};
    int counter = 0;
    for (int i = 0; i < allElements.size() - counter; ++i){
        if (allElements[i] < 0){
            double tmp = allElements[i];
            allElements.erase(allElements.begin() + i);
            allElements.push_back(tmp);
            --i;
            ++counter;
        }
    }

    for (int i = 0; i < allElements.size() - counter; ++i){
        if (allElements[i] == 0){
            double tmp = allElements[i];
            allElements.erase(allElements.begin() + i);
            allElements.push_back(tmp);
            --i;
            ++counter;
        }
    }

    for (int i = 0; i < allElements.size() - counter; ++i){
        if (allElements[i] > 0){
            double tmp = allElements[i];
            allElements.erase(allElements.begin() + i);
            allElements.push_back(tmp);
            --i;
            ++counter;
        }
    }
    for (int i = 0; i < allElements.size(); ++i){
        cout << allElements[i]<< endl;
    }
    return 0;
}

