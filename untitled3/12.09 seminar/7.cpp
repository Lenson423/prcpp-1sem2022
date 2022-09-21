//
// Created by lenso on 12.09.2022.
//
#include <iostream>
using namespace std;
int main() {
    double a;
    cout<<"enter a:"<<endl;
    cin>>a;
    double b;
    cout<<"enter b:"<<endl;
    cin>>b;
    double c;
    cout<<"enter c:"<<endl;
    cin>>c;
    if (a+b>c and a+c>b and b+c>a){
        cout<<"You can";
    }else{
        cout<<"You can't";
    }
    return 0;
}
