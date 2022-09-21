#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>

using std::cout, std::cin,std::endl;

int main() {
    int x1, x2, x3;
    int y1, y2, y3;

    cout << "Введите координаты" << endl;
    cout << "X1 = " << endl;
    cin >> x1;
    cout << "Y1 = " << endl;
    cin >> y1;
    cout << "X2 = " << endl;
    cin >> x2;
    cout << "Y2 = " << endl;
    cin >> y2;
    cout << "X3 = " << endl;
    cin >> x3;
    cout << "Y3 = " << endl;
    cin >> y3;

    double AB = pow((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1), 0.5);
    double AC = pow((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1), 0.5);
    double BC = pow((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3), 0.5);

    double P = AB + AC + BC;
    double area = pow(P/2 * (P/2 - AB) * (P/2 - AC) * (P/2 - BC), 0.5);

    double OA = pow (x1*x1+y1*y1,0.5);
    double OB = pow (x2*x2+y2*y2,0.5);
    double OC = pow (x3*x3+y3*y3,0.5);

    double P_ABO = AB + OA + OB;
    double areaABO = pow(P_ABO/2 * (P_ABO/2 - AB) * (P_ABO/2 - OA) * (P_ABO/2 - OB), 0.5);

    double P_ACO = AC + OA + OC;
    double areaACO = pow(P_ACO/2 * (P_ACO/2 - AC) * (P_ACO/2 - OA) * (P_ACO/2 - OC), 0.5);

    double P_BCO = BC + OC + OB;
    double areaBCO = pow(P_BCO/2 * (P_BCO/2 - BC) * (P_BCO/2 - OC) * (P_BCO/2 - OB), 0.5);

    if (area -(areaABO + areaACO + areaBCO)<=0.0000001 and area -(areaABO + areaACO + areaBCO)>=-0.0000001){
        cout <<"Yes, it's"<<endl;
        cout << area<<endl;
        cout <<areaABO + areaACO + areaBCO;
    }else{
        cout<<"No, it dosent"<<endl;
        cout << area<<endl;
        cout <<areaABO + areaACO + areaBCO;
    }
}


