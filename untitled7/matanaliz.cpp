//
// Created by lenso on 26.09.2022.
//

#include <iostream>
#include <vector>
#include "cmath"

using namespace std;

int main() {
   for (int n = 1; n <= 128; n ++){
       cout << n << " : " << ((n & (n - 1)) == 0) << endl;
   }
    return 0;
}