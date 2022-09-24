#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Последовательно введите номера текущих дня, месяца и года:" << endl;
    unsigned int day, month, year;
    cin >> day >> month >> year;
    if (month == 1 and day == 1){
        year -= 1;
        month = 12;
        day = 31;
    }else if (day == 1){
        month -= 1;
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
                day = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                day = 30;
                break;
            case 2:
                if (year % 4 != 0 or (year % 100 == 0 and year % 400 != 0)) {day = 28;}
                else {day = 29;}
                break;
        }
    }else{
        day -= 1;
    }

    if (month >= 10){
        if (day < 10){
            cout << "Дата предыдущего дня: " << "0" << day << "." << month << "." << year;
        }else{
            cout << "Дата предыдущего дня: " << day << "." << month << "." << year;
        }
    }else{
        if (day < 10){
            cout << "Дата предыдущего дня: 0" << day << ".0" << month << "." << year;
        }else{
            cout << "Дата предыдущего дня: " << day << ".0" << month << "." << year;;
        }
    }

    return 0;
}
