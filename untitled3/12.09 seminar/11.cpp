#include <iostream>

int main() {
    std::cout<<"Введите день"<< std::endl;
    int day;
    std::cin>>day;

    std::cout<<"Введите месяц"<< std::endl;
    int month;
    std::cin>>month;

    std::cout<<"Введите год"<< std::endl;
    int year;
    std::cin>>year;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day <= 31) {
                std::cout << "OK" << std::endl;
            }else{
                std::cout<<"Wrong";
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if (day <= 30) {
                std::cout << "OK" << std::endl;
            }else{
                std::cout<<"Wrong";
            }
            break;
        case 2:
            if (year % 4 != 0 or (year % 100 == 0 and year % 400 != 0)){
                if (day <= 28){
                    std::cout <<"OK"<<std::endl;
                }else{
                    std::cout<<"Wrong";
                }
            }else{
                if (day <= 29){
                    std::cout <<"OK"<<std::endl;
                }else{
                    std::cout<<"Wrong";
                }
            }
            break;
        default:
            std::cout<<"Wrong";
            break;
    }
    return 0;
}
