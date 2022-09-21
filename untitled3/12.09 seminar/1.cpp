//
// Created by lenso on 12.09.2022.
//
#include <iostream>
using namespace std;
int main() {
    //1 problem
    int age;
    cin >> age;
    int count_100 = age / 100;
    int count_10 = (age - count_100 * 100) / 10;
    int count_0 = age - count_100 * 100 - count_10 * 10;
    int count = count_100 + count_10 + count_0;
    cout << count;
    return 0;
}