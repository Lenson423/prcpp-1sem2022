//Богдан Евгений
#include <iostream>
#include <vector>
#include "cmath"

using std::cout, std ::cin, std::endl, std::max;

int main() {
    int a, b ;
    double result_ab;
    char operation;
    cout << "Enter expression ";
    cin >> a;
    cin >> operation;
    cin >> b;
    switch (operation) {
        case  '*' :
        {
            result_ab=a*b;
            break;
        }
        case  '+' :
        {
            result_ab=a+b;
            break;
        }
        case  '-' :
        {
            result_ab=a-b;
            break;
        }
        case  '/' :
        {
            result_ab=(double)a/b;
            break;
        }
        default:
            cout << "error";
            return 0;
    }
    cout << a << operation << b << " = " << result_ab;
    return 0;
}
