#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int num;
    cin >> num;

    if (num < 100 or num > 999){
        cout << "Число вне диапозона";
        return 0;
    }
    int hundred_amount = num / 100;
    int ten_amount = (num - hundred_amount*100)/10;
    int one_amount = num % 10;

    string hundred, ten, one;
    string result;

    switch (hundred_amount) {
        case 1:
            hundred = "Сто ";
            result += hundred;
            break;
        case 2:
            hundred = "Двести ";
            result += hundred;
            break;
        case 3:
            hundred = "Триста ";
            result += hundred;
            break;
        case 4:
            hundred = "Четыреста ";
            result += hundred;
            break;
        case 5:
            hundred = "Пятьсот ";
            result += hundred;
            break;
        case 6:
            hundred = "Шестьсот ";
            result += hundred;
            break;
        case 7:
            hundred = "Семьсот ";
            result += hundred;
            break;
        case 8:
            hundred = "Восемьсот ";
            result += hundred;
            break;
        case 9:
            hundred = "Девятьсот ";
            result += hundred;
            break;
    }
    if (10 * ten_amount + one_amount < 20 and 10 * ten_amount + one_amount > 10){
        int strange_number = 10 * ten_amount + one_amount;
        switch (strange_number){
            case 11:
                ten = "одиннадцать";
                break;
            case 12:
                ten = "двенадцать";
                break;
            case 13:
                ten = "тринадцать";
                break;
            case 14:
                ten = "четырнадцать";
                break;
            case 15:
                ten = "пятнадцать";
                break;
            case 16:
                ten = "шестнадцать";
                break;
            case 17:
                ten = "семнадцать";
                break;
            case 18:
                ten = "восемнадцать";
                break;
            case 19:
                ten = "девятнадцать";
                break;
        }
        result += ten;
        cout << result;
    }else{
        switch (ten_amount) {
            case 1:
                ten = "десять ";
                result += ten;
                break;
            case 2:
                ten = "двадцать ";
                result += ten;
                break;
            case 3:
                ten = "тридцать ";
                result += ten;
                break;
            case 4:
                ten = "сорок ";
                result += ten;
                break;
            case 5:
                ten = "пятьдесят ";
                result += ten;
                break;
            case 6:
                ten = "шестьдесят ";
                result += ten;
                break;
            case 7:
                ten = "семьдесят ";
                result += ten;
                break;
            case 8:
                ten = "восемьдесят ";
                result += ten;
                break;
            case 9:
                ten = "девяносто ";
                result += ten;
                break;
            default:
                ten = "";
                break;
        }
        switch (one_amount) {
            case 1:
                one = "один ";
                result += one;
                break;
            case 2:
                one = "два ";
                result += one;
                break;
            case 3:
                one = "три ";
                result += one;
                break;
            case 4:
                one = "четыре ";
                result += one;
                break;
            case 5:
                one = "пять ";
                result += one;
                break;
            case 6:
                one = "шесть ";
                result += one;
                break;
            case 7:
                one = "семь ";
                result += one;
                break;
            case 8:
                one = "восемь ";
                result += one;
                break;
            case 9:
                one = "девять ";
                result += one;
                break;
            default:
                one = "";
                break;
        }
        cout << result;
    }

    return 0;
}