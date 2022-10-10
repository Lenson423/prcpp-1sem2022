//2.	Дан массив из n чисел. «Уплотнить» его, удалив нулевые элементы.
// Created by lenso on 03.10.2022.
//Богдан Евгений

#include <iostream>
#include <vector>
#include "cmath"

using std::cout, std ::cin, std::endl, std::max, std::cos, std::vector;

int main() {
    vector <double> all_elements  = {12, 12.349, -45, 0, 0, 67.5, 78.1, -0.111, -12.78,0,5};
    all_elements.erase(std::remove(all_elements.begin(), all_elements.end(), 0), all_elements.end());
    for (int i = 0; i < all_elements.size(); ++i){
        cout << all_elements[i]<< endl;
    }
    return 0;
}


