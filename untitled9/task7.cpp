#include <vector> //done

void partitionBySign(std::vector<int>& originalVector) {
    int counter = 0;
    for (int i = 0; i < originalVector.size() - counter; ++i){
        if (originalVector[i] < 0){
            int tmp = originalVector[i];
            originalVector.erase(originalVector.begin() + i);
            originalVector.push_back(tmp);
            --i;
            ++counter;
        }
    }

    for (int i = 0; i < originalVector.size() - counter; ++i){
        if (originalVector[i] == 0){
            int tmp = originalVector[i];
            originalVector.erase(originalVector.begin() + i);
            originalVector.push_back(tmp);
            --i;
            ++counter;
        }
    }

    for (int i = 0; i < originalVector.size() - counter; ++i){
        if (originalVector[i] > 0){
            int tmp = originalVector[i];
            originalVector.erase(originalVector.begin() + i);
            originalVector.push_back(tmp);
            --i;
            ++counter;
        }
    }
}
