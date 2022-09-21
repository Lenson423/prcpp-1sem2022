#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    double a, b, x, y, z;
    cout << "Сперва последовательно введите измерения двери, а затем шкафа."<<endl;
    cin >> a >> b >> x >> y >> z;
    if (x<=0 or x>=10 or y<=0 or y>=10 or z<=0 or z>=10 or a<=0 or a>=10 or b<=0 or b>=10){
        cout << "Не соответствует условию"<<endl;
        return 0;
    }
    if ((x < a && y < b) || (y < a && x < b) || (y < a && z < b) ||
        (z < a && y < b) || (x < a && z < b) || (z < a && x < b)) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}


