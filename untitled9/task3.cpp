#include <vector>
//done
void reverseArray(std::vector<int>& originalVector) {
    for(int i = originalVector.size() - 1; i >= 0; --i){
        double tmp = originalVector[i];
        originalVector.erase(originalVector.begin() + i);
        originalVector.push_back(tmp);
    }
}
