//
// Created by lenso on 12.09.2022.
//
#include <iostream>
int main() {
    double a,b,c,A,B,C;
    std::cout<<"Sequentially enter all 6 numbers:"<<std::endl;
    std::cin>>a>>b>>c>>A>>B>>C;
    bool first = a/A==b/B && b/B==c/C;
    bool second = a/A==b/C && b/C==c/B;
    bool third = a/B==b/A && b/A==c/C;
    bool forth = a/B==b/C && b/C==c/A;
    bool fifth = a/C==b/A && b/A==c/B;
    bool sixth = a/C==b/B && b/B==c/A;
    if (first or second or third or forth or fifth or sixth){
        std::cout<<"YES"<<std::endl;
        if (first) {std::cout<<a/A;}
        if (second) {std::cout<<a/A;}
        if (third) {std::cout<<a/B;}
        if (forth) {std::cout<<a/B;}
        if (fifth) {std::cout<<a/C;}
        if (sixth) {std::cout<<a/C;}
    }else{
        std::cout<<"Еriangles are not similar you can't find the similarity coefficient";
    }
    return 0;
}
