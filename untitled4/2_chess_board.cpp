//
// Created by lenso on 21.09.2022.
//
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите последовательно координаты 2 полей шахматной доски x1, y1, x2, y2." << endl;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 < 1 or x1 >8 or x2 < 1 or x2 > 8 or y1 < 1 or y1 >8 or y2 < 1 or y2 > 8){
        cout << "Соответсвующих координат не существует на доске.";
        return 0;
    }
    if ((x1 == x2 and y1 != y2) or (y1 == y2 and x1 != x2)){
        cout << "Ладья за один ход может перейти таким образом.";
    }else{
        cout << "Вы нет можете походить ладьёй таким образом.";
    }
    return 0;
}
