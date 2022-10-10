//8.	Даны две матрицы размера n x k и k x m. Найти их произведение.
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

    int row1, row2, column1, column2;

    cout << "Введите количество строк 1 матрицы: " << endl;
    cin >> row1;
    cout << "Введите количество столбцов 1 матрицы: "<< endl;
    cin >> column1;
    cout << "Введите количество строк 2 матрицы: "<< endl;
    cin >> row2;
    cout << "Введите количество столбцов 2 матрицы: "<< endl;
    cin >> column2;
    if (column1 != row2)
    {
        cout << "Количесвто столбцов в 1 матрице не равно количеству строк во 2";
        return 0;
    }

    double** firstMatrix = new double* [row1];
    cout << "Введите элементы первой матрицы" << endl;
    for (int i = 0; i < row1; i++)
    {
        firstMatrix[i] = new double[column1];
        for (int j = 0; j < column1; j++)
        {
            cout << "firstMatrix[" << i << "][" << j << "]= ";
            cin >> firstMatrix[i][j];
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
            cout << firstMatrix[i][j] << " ";
        cout << endl;
    }

    double** secondMatrix = new double* [row2];
    cout << "Введите элементы второй матрицы" << endl;
    for (int i = 0; i < row2; i++)
    {
        secondMatrix[i] = new double[column2];
        for (int j = 0; j < column2; j++)
        {
            cout << "secondMatrix[" << i << "][" << j << "]= ";
            cin >> secondMatrix[i][j];
        }
    }

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout << secondMatrix[i][j] << " ";
        }
        cout << endl;
    }


    double** thirdMatrix = new double* [row1];
    for (int i = 0; i < row1; i++)
    {
        thirdMatrix[i] = new double[column2];
        for (int j = 0; j < column2; j++)
        {
            thirdMatrix[i][j] = 0;
            for (int k = 0; k < column1; k++)
                thirdMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
        }
    }

    cout << "Получившаяся матрица" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
            cout << thirdMatrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}

