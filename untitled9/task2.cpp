#include <vector>
//done

void filterArray(std::vector<int>& originalVector) {
    int size = originalVector.size();
    for (int i = 0; i < size; ++i){
        if (originalVector[i] == 0){
            originalVector.erase(originalVector.begin() + i);
            --i;
            --size;
        }
    }
}
