//
// Created by lenso on 26.09.2022.
//
#include <iostream>
#include <cmath>
#include "windows.h"

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите n:" << endl;
    int n = 64;
    cin >> n;
    if ((n & (n - 1)) == 0) { //цифры треугольника серпинского для 2^k (1024)
        for (int y = n - 1; y >= 0; y--) {

            for (int x = 0; x + y < n; x++) {
                if (x & y) {
                    cout << "0";
                } else {
                    cout << "1";
                }
            }

            cout << endl;
        }
    }else{  //цифры треугольника серпинского для любого другого n
        int count = 0;
        int tmp = n;
        while (tmp != 0 ){
            tmp = tmp / 2;
            ++count;
        }
        int border = pow(2, count);
        int counter2 = 0;
        for (int y = border - 1; y >= 0; y--) {
            for (int x = 0; x + y < border; x++) {
                if (x & y) {
                    cout << "0";
                } else {
                    cout << "1";
                }
            }
            ++counter2;
            if (counter2 >= n){
                return 0;
            }
            cout << endl;
        }
        cout << counter2;
    }
    return 0;
}