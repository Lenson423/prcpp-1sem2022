//
// Created by lenso on 26.09.2022.
//

#include <iostream>
#include <vector>
#include "cmath"

using namespace std;

int main() {
    double a1;
    double a2;
    cin >> a1;
    cin >> a2;
    vector <double> massiv;
    massiv.push_back(a1);
    massiv.push_back(a2);
    for (int i = 0; i <= pow (10, 7)+1; ++i){
        double c = a2;
        a2 = sqrt(a1) + sqrt(a2);
        a1 = c;
        massiv.push_back(a2);
    }
    cout << massiv[-1]<< endl;
    cout << massiv [-2]<<endl;
    cout << massiv[-3]<< endl;
    cout << massiv[-4]<< endl;
    cout << massiv[-5]<< endl;
    cout << massiv [-6]<<endl;
    cout << massiv[-7]<< endl;
    cout << massiv[-8]<< endl;
    return 0;
}