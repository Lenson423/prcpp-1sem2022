#include <vector>
#include "iostream"

void cyclicShift(std::vector<int>& originalVector, int n) {
    if (n > originalVector.size()){
        std::cout << "n is greater then vector";
        return;
    }
    for(int i = 0; i < n; --n){
        double tmp = originalVector[i];
        originalVector.erase(originalVector.begin() + i);
        originalVector.push_back(tmp);
    }
}
