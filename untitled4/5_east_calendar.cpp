//
// Created by lenso on 24.09.2022.
//
#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите номер года (текущей эры):" << endl;
    unsigned int  year;
    cin >> year;

    string colorMale, colorFemale, animal;

    switch (year % 10){
        case 0:
        case 1:
            colorMale = "белого";
            colorFemale = "белой";
            break;
        case 2:
        case 3:
            colorMale = "черного";
            colorFemale = "черной";
            break;
        case 4:
        case 5:
            colorMale = "зеленого";
            colorFemale = "зеленой";
            break;
        case 6:
        case 7:
            colorMale = "красного";
            colorFemale = "красной";
            break;
        case 8:
        case 9:
            colorMale = "желтого";
            colorFemale = "желтой";
            break;
    }
    switch (year % 12) {
        case 4:
            animal = "крысы";
            cout << year << " - год " << colorFemale << " " << animal;
            break;
        case 5:
            animal = "быка";
            cout << year << " - год " << colorMale << " " << animal;
            break;
        case 6:
            animal = "тигра";
            cout << year << " - год " << colorMale << " " << animal;
            break;
        case 7:
            animal = "кролика";
            cout << year << " - год " << colorMale << " " << animal;
            break;
        case 8:
            animal = "дракона";
            cout << year << " - год " << colorMale << " " << animal;
            break;
        case 9:
            animal = "змеи";
            cout << year << " - год " << colorFemale << " " << animal;
            break;
        case 10:
            animal = "лошади";
            cout << year << " - год " << colorFemale << " " << animal;
            break;
        case 11:
            animal = "козы";
            cout << year << " - год " << colorFemale << " " << animal;
            break;
        case 0:
            animal = "обезьяны";
            cout << year << " - год " << colorFemale << " " << animal;
            break;
        case 1:
            animal = "петуха";
            cout << year << " - год " << colorMale << " " << animal;
            break;
        case 2:
            animal = "собаки";
            cout << year << " - год " << colorFemale << " " << animal;
            break;
        case 3:
            animal = "свиньи";
            cout << year << " - год " << colorFemale << " " << animal;
            break;
    }

    return 0;
}
