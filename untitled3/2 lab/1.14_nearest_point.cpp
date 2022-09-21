#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    cout << "Enter A point coordinates:"<<endl;
    double x1;
    cin >> x1;

    cout << "Enter B point coordinates:"<<endl;
    double x2;
    cin >> x2;

    cout << "Enter C point coordinates:"<<endl;
    double x3;
    cin >> x3;

    double AB = fabs(x2 - x1);
    double AC = fabs(x3 - x1);

    if (AB < AC){
        cout << "B is closer to A. AB = "<<AB;
    }else if (AC < AB){
        cout << "C is closer to A. AB = "<<AC;
    }else{
        cout <<"Distances are equals.";
    }

    return 0;
}


