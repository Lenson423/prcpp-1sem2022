//7.	Дано два возрастающих массива. Найти количество общих элементов в них.
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
    vector<int> allElements = {-15, -25, -54, 0 ,12, 34, 65, 12};
    vector<int> allElements2 = {-25, -15, 56, 0, 12, 45};
    std::sort(allElements.begin(), allElements.end());
    std::sort(allElements2.begin(), allElements2.end());
    std::unique(allElements.begin(), allElements.end());
    std::unique(allElements2.begin(), allElements2.end());

    int i = 0, j = 0, count = 0;
    while(i < allElements.size() && j < allElements2.size())
    {
        if(allElements[i] < allElements2[j])
            ++i;
        else if(allElements2[j] < allElements[i])
            ++j;
        else
        {
            ++i, ++j, ++count;
        }
    }
    cout << count;
    return 0;
}

