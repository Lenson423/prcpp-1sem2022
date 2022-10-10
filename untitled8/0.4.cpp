//3.	Дан массив из n чисел. Не используя вспомогательный массив поменять местами элементы таким образом, чтобы сначала шли отрицательные элементы, затем нулевые, потом положительные элементы. Взаимное расположение элементов в своих категориях должно остаться неизменным.
// Created by lenso on 03.10.2022.
//Богдан Евгений

#include <iostream>
#include <vector>
#include "cmath"

using std::cout, std ::cin, std::endl, std::max, std::cos, std::vector;

int main() {
    long long n;
    cout << "" << endl;
    cin >> n;
    int x;
    cout << "" << endl;
    cin >> x;
    vector <double> all_elements  = {};
    while (n){
        int tmp = n % 10;
        if (tmp == x){
            if (x != 0){
                tmp *= 11;
            }else{
                all_elements.push_back(0);
            }
        }
        all_elements.push_back(tmp);
        n /= 10;
    }
    for (int i = all_elements.size() - 1; i >= 0; --i){
        cout << all_elements[i];
    }
    return 0;
}


