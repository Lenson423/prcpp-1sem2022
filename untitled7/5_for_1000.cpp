//
// Created by lenso on 26.09.2022.
//

#include <iostream>

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() { // треугольник серпинского для 1000
    int n = 1000;
    for (int y = n - 1; y >= 0; y--) {
        for (int i = 0; i < y; i++) {
            cout << " ";
        }
        for (int x = 0; x + y < n; x++) {
            if (x & y) {
                cout << " " << " ";
            } else {
                cout << "1 ";
            }
        }

        cout << endl;
    }
    return 0;
}