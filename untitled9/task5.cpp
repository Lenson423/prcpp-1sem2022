#include <vector>
#include "iostream"
//done
bool isPermutation(const std::vector<int>& originalVector) {
    if (originalVector.size() == 0){
        std::cout << "Vector is empty";
        return false;
    }
    std::vector<int> vectorToTermutation = originalVector;

    for (int i = 0; i < vectorToTermutation.size() - 1; i++) {
        for (int j = 0; j < vectorToTermutation.size() - i - 1; j++) {
            if (vectorToTermutation[j] > vectorToTermutation[j + 1]) {
                int tmp = vectorToTermutation[j];
                vectorToTermutation[j] = vectorToTermutation[j + 1];
                vectorToTermutation[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < vectorToTermutation.size(); ++i){
        if (vectorToTermutation[i] != i + 1){
            return false;
        }
    }
    return true;
}
