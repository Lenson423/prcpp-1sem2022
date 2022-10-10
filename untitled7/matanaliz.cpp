//
// Created by lenso on 26.09.2022.
//

#include <iostream>
#include <vector>
#include "cmath"

using namespace std;

int main() {

    int m = 8676330;
    cin >> m;

    int secondToday = m % 86400;
    int countHours = secondToday / 3600;
    int countMinuts = (secondToday - countHours*3600)/60;
    int countSeconds = secondToday - countHours*3600  - countMinuts * 60;
    cout << countHours / 10 << countHours % 10 << ":" << countMinuts / 10 << countMinuts % 10<< ":" << countSeconds / 10 << countSeconds % 10;
}