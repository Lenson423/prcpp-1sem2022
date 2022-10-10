//11.	Дано целое число k, а также k наборов ненулевых целых чисел. Признаком завершения каждого набора является число 0 (оно в набор не входит). Для каждого набора вывести количество его элементов. Вывести также общее количество элементов во всех наборах.
// Created by lenso on 03.10.2022.
//Богдан Евгений

#include <iostream>
#include <vector>
#include "cmath"

using std::cout, std ::cin, std::endl, std::max, std::cos, std::vector;

int main() {
    int k;
    int sum = 0;
    cout << "Введите k:" <<endl;
    cin >> k;
    int *count = new int[k];
    srand(k);
    for (int i = 0; i < k; i++) {
        count[i] = 0;
        int x = 1;
        while (x != 0) {
            x = -50 + rand() % 100;
            if (x != 0) {
                count[i]++;
            }
        }
        sum += count[i];
    }
    for (int i = 0; i < k; i++) {
        cout << i + 1 << ":" << count[i] << ", ";
    }
    cout << "Sum = " << sum << endl;

    return 0;
}


