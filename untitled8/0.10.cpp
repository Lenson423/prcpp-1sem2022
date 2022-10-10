//10.	Выполните транспонирование массива размерности n x m (полученная из исходной матрицы заменой строк на столбцы).
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

    int row, column;

    cout << "Введите количество строк 1 матрицы: " << endl;
    cin >> row;
    cout << "Введите количество столбцов 1 матрицы: "<< endl;
    cin >> column;



    double** firstMatrix = new double* [row];
    cout << "Введите элементы матрицы" << endl;
    for (int i = 0; i < row; i++)
    {
        firstMatrix[i] = new double[column];
        for (int j = 0; j < column; j++)
        {
            cout << "firstMatrix[" << i << "][" << j << "]= ";
            cin >> firstMatrix[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << firstMatrix[i][j] << " ";
        cout << endl;
    }


    double** secondMatrix = new double* [row];
    for (int i = 0; i < column; i++)
    {
        secondMatrix[i] = new double[column];
        for (int j = 0; j < row; j++)
        {
            secondMatrix[i][j] = 0;
            for (int k = 0; k < column; k++)
                secondMatrix[i][j] = firstMatrix[j][i];
        }
    }

    cout << "Получившаяся матрица" << endl;
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
            cout << secondMatrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}

