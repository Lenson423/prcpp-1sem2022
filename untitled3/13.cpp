#include <iostream>
#include <iomanip>
#include "cmath"

using namespace std;
int main(){
    int m = 8676330;
    int secondToday = m / 86400;
    int countHours = secondToday / 3600;
    int countMinuts = (secondToday - countHours*3600)/60;
    int countSeconds = secondToday - countHours*3600  - countMinuts * 60;


#include <iostream>
#include <iomanip>
#include <cmath>

    using namespace std;
    int main(){


        double x1 = 0;
        double y1 = 0;
        double x2 = 2;
        double y2 = 0;
        double x3 = 1;
        double y3 = 3;
        double AB = pow((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1), 0.5);
        double AC = pow((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1), 0.5);
        double BC = pow((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3), 0.5);
        double P = AB + AC + BC;
        double area = pow(P/2 * (P/2 - AB) * (P/2 - AC) * (P/2 - BC), 0.5);
        double r = 2 * area / P;
        double R = AB * AC * BC / 4 / area;

        if (AB*AB + BC*BC < AC*AC or AB*AB + AC*AC < BC*BC or AC*AC + BC*BC < AB*AB){
            std::cout << "obtuse triangle";
        } else {if(AB*AB + BC*BC == AC*AC or AB*AB + AC*AC == BC*BC or AC*AC + BC*BC == AB*AB){
                std::cout << "right triangle";
            }else{
                std::cout << "acute triangle";
            }
        }

        return 0;
    }



}

