#include <vector>
#include "iostream"


int numberOfCommonElements(const std::vector<int>& firstVectorOrig, const std::vector<int>& secondVectorOrig) {
    std::vector<int> firstVector = firstVectorOrig;
    std::vector<int> secondVector = secondVectorOrig;
    if (firstVector.size() == 0 || secondVector.size() == 0){
        return 0;
    }
    for (int i = 0; i < firstVector.size() - 1; ++i){
        if (firstVector[i] >= firstVector[i + 1]){
            std::cout << "Массив 1 не строго возрастающий!";
            exit(0);
        }
    }
    for (int i = 0; i < secondVector.size() - 1; ++i){
        if (secondVector[i] >= secondVector[i + 1]){
            std::cout << "Массив 2 не строго возрастающий!";
            exit(0);
        }
    }

    int i = 0, j = 0, count = 0;
    while(i < firstVector.size() && j < secondVector.size())
    {
        if(firstVector[i] < secondVector[j])
            ++i;
        else if(secondVector[j] < firstVector[i])
            ++j;
        else
        {
            ++i, ++j, ++count;
        }
    }
    return count;
}
