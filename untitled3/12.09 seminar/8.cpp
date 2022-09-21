//
// Created by lenso on 12.09.2022.
//
#include <iostream>
int main() {
    std::cout<<"Введите 4 числа:"<<std::endl;
    unsigned int a,b,c,d;
    std::cin>>a>>b>>c>>d;
    bool first = a+b>c and a+c>b and b+c>a;
    bool second = a+b>d and a+d>b and d+c>a;
    bool third = d+b>c and d+c>b and b+c>d;
    bool forth = a+d>c and a+c>d and d+c>a;
    if (first or second or third or forth){
        std::cout<<"You can"<<std::endl;
        if (first) {std::cout<<"It's sides are equal:"<<std::endl<<a<<std::endl<<b<<std::endl<<c;}
        if (second) {std::cout<<"It's sides are equal:"<<std::endl<<a<<std::endl<<b<<std::endl<<d;}
        if (third) {std::cout<<"It's sides are equal:"<<std::endl<<d<<std::endl<<b<<std::endl<<c;}
        if (forth) {std::cout<<"It's sides are equal:"<<std::endl<<a<<std::endl<<d<<std::endl<<c;}
    }else{
        std::cout<<"You can't";
    }
    return 0;
}
