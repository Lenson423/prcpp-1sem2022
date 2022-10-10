//6.	Переставить элементы массива в обратном порядке без дополнительных массивов.
// Created by lenso on 03.10.2022.
//Богдан Евгений

#include <iostream>
#include <vector>
#include "cmath"

using std::cout, std ::cin, std::endl, std::max, std::cos, std::vector, std::erase;

int main() {
    vector <double> allElements  = {12, 12.349, -45, 0, 0, 67.5, 78.1, -0.111, -12.78, 13};

    for(int i = allElements.size() - 1; i >= 0; --i){
        double tmp = allElements[i];
        allElements.erase(allElements.begin() + i);
        allElements.push_back(tmp);
    }
    for (int i = 0; i < allElements.size(); ++i){
        cout << i << " : " << allElements[i]<< endl;
    }
    return 0;
}

