//
// Created by lenso on 12.09.2022.
//
#include <iostream>
using namespace std;
int main() {

    int num;
    cin>>num;
    if (100000<=num and num<1000000){
        cout << "1)6 digits"<<endl;
        int first_digit = num%10;
        int second_digit = (num - first_digit)/10%10;
        int third_digit = (num - first_digit - second_digit*10)/100%10;
        int fourth_digit = (num - first_digit - second_digit*10 - third_digit*100)/1000%10;
        int fifth_digit = (num - first_digit - second_digit*10 - third_digit*100 - fourth_digit*1000)/10000%10;
        int sixth_digit = (num - first_digit - second_digit*10 - third_digit*100 - fourth_digit*1000-fifth_digit*10000)/100000%10;
        if (first_digit+fourth_digit == second_digit + fifth_digit and first_digit+fourth_digit == third_digit + sixth_digit){
            cout<<"сумма первой и четвертой цифр равна сумме второй и пятой и равна сумме третьей и шестой"<<endl;
        }
    }else{
        cout <<"1)Wrong";
    }
    return 0;
}
