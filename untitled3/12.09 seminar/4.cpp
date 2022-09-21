//
// Created by lenso on 12.09.2022.
//
#include <iostream>
using namespace std;
int main() {
    int n, m;
    std::cin >> n;
    if (n >= 10000 and n<100000){
        cout<<"5 digits"<<endl;
        m = n % 10;
        while(n /= 10){
            if (m >= n % 10){
                std::cout << "No" << std::endl;
                return 0;
            }
            m = n % 10;
        }
        std::cout << "Yes" << std::endl;}else{
        cout<<"Not 5 digits";
    }
    return 0;
}
