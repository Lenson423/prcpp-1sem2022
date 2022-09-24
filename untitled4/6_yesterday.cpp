#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl;

int day_error(){
    cout << "Введенного дня в данном месяце не существует";
    exit(0);
}

int analys(int day, int month, int year) {
    if (month > 12 or year < 1){
        cout << "Введенного месяца или года не существует" << endl;
        exit(0);
    }
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31) {
                day_error();
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30) {
                day_error();
            }
            break;
        case 2:
            if (year % 4 != 0 or (year % 100 == 0 and year % 400 != 0)) {
                if (day > 28){
                    day_error();
                }
            }else {
                if (day > 29){
                    day_error();
                }
            }
            break;
    }
    return 0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Последовательно введите номера текущих дня, месяца и года (нашей эры):" << endl;
    unsigned int day, month, year;
    cin >> day >> month >> year;
    analys (day, month, year);
    if (day == 1){
        if (month == 1) {
            year -= 1;
            month = 12;
            day = 31;
    }else {
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
    }}else{
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
            cout << "Дата предыдущего дня: " << day << ".0" << month << "." << year;
        }
    }

    return 0;
}

