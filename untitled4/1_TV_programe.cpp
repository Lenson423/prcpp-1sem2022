#include <iostream>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    string firstName, secondName, thirdName;
    unsigned int startTimeH1, startTimeH2, startTimeH3;
    unsigned int startTimeM1, startTimeM2, startTimeM3;
    unsigned int longest1, longest2, longest3;

    cout << "Последовательно введите название, корректные время начала(сперва часы, затем минуты) и продолжительность программы "
            "№1(в минутах)" << endl;
    getline(cin, firstName);
    cin >> startTimeH1;
    cin >> startTimeM1;
    cin >> longest1;

    cout << "Последовательно введите название, корректные время начала(сперва часы, затем минуты) и продолжительность программы "
            "№2(в минутах)" << endl;
    cin.ignore();
    getline(cin, secondName);
    cin >> startTimeH2;
    cin >> startTimeM2;
    cin >> longest2;

    cout << "Последовательно введите название, корректные время начала(сперва часы, затем минуты) и продолжительность программы "
            "№3(в минутах)" << endl;
    cin.ignore();
    getline(cin, thirdName);
    cin >> startTimeH3;
    cin >> startTimeM3;
    cin >> longest3;

    if (startTimeH1 > 24 or startTimeH1 < 0 or startTimeH2 > 24 or startTimeH2 < 0 or startTimeH3 < 0 or startTimeH3 > 24){
        cout << "Количество часов введено неверно.";
        return 0;
    }

    if (startTimeM1 > 59 or startTimeH1 < 0 or startTimeH2 > 59 or startTimeH2 < 0 or startTimeH3 < 0 or startTimeH3 > 59){
        cout << "Количество минут введено неверно.";
        return 0;
    }

    unsigned int startTime1 = startTimeH1 * 60 + startTimeM1;
    unsigned int startTime2 = startTimeH2 * 60 + startTimeM2;
    unsigned int startTime3 = startTimeH3 * 60 + startTimeM3;

    cout << "Введите корректное текущее время (сперва часы, затем минуты):" << endl;
    int hours, minuts;
    cin >> hours >> minuts;
    int currentTime = hours * 60 + minuts;
    int index = 0;
    if (currentTime <= startTime1 + longest1 and currentTime >= startTime1){
        cout << "Андрей может смотреть '" << firstName << "'" << endl;
        ++index;
    }
    if (currentTime <= startTime2 + longest2 and currentTime >= startTime2){
        cout << "Андрей может смотреть '" << secondName << "'" << endl;
        ++index;
    }
    if (currentTime <= startTime3 + longest3 and currentTime >= startTime3){
        cout << "Андрей может смотреть  '" << thirdName << "'" << endl;
        ++index;
    }
    if (index == 0){
        cout << "В данный момент не идет никакая программа";
    }else if (index == 1){
        cout << "В данный момент идет 1 программа";
    }else{
        cout << "В данный момент идут " << index << " программы";
    }
    return 0;
}

