#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    int month;
    cout << "Enter month's number:"<< endl;
    cin >> month;

    int day;
    cout << "Enter a day:"<< endl;
    cin >> day;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31){
                cout << "It's not a day's number";
                return 0;
            }
            if (day == 31){
                day = 1;
                if (month != 12){
                    month +=1;
                }else{
                    month = 1;
                }
            }else{
                day += 1;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30){
                cout << "It's not a day's number";
                return 0;
            }
            if (day == 30){
                day = 1;
                month += 1;
            }else{
                day += 1;
            }
            break;
        case 2:
            if (day > 28){
                cout << "It's not a day's number";
                return 0;
            }
            if (day == 28){
                day = 1;
                month += 1;
                break;
            }else{
                day += 1;
            }
            break;
        default:
            cout << "It's not a month's number";
            return 0;
    }
    cout << "Day: "<< day << endl << "Month: "<< month;
    return 0;
}