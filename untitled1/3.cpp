#include "iostream"
using namespace std;
int main(){
    int x,y;
    cout << "Ведите 1 целое число" << endl;
    cin >> x;
    cout << "Ведите 2 целое число" << endl;
    cin >> y;
    long int value = (3+x*x-y*y*y)*(x+3)*(x+3)/(x-y*y);
    cout << "Значение выражения равно " << value;

    return 0;
}
