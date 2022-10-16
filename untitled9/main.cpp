#include "declarations.h"
#include <cassert>

void testTask1() {
    assert(leastMissingDigit(0) == 1);
    assert(leastMissingDigit(120) == 3);
    assert(leastMissingDigit(01234567) == 0);
}

void testTask2(std::vector<int> testVector) {
    filterArray(testVector);
    for (int i = 0; i < testVector.size(); ++i) {
        std::cout << testVector[i] << std::endl;
    }
}

void testTask3(std::vector<int> testVector) {
    reverseArray(testVector);
    for (int i = 0; i < testVector.size(); ++i) {
        std::cout << testVector[i] << std::endl;
    }
}

void testTask4(std::vector<int> testVector, std::vector<int> testVector1) {
    std::cout << numberOfCommonElements(testVector, testVector1);
}

void testTask5(std::vector<int> testVector) {
    std::cout << isPermutation(testVector);
}

void testTask6(std::vector<int> testVector, int n) {
    cyclicShift(testVector, n);
    for (int i = 0; i < testVector.size(); ++i) {
        std::cout << testVector[i] << std::endl;
    }
}

void testTask7(std::vector<int> testVector) {
    partitionBySign(testVector);
    for (int i = 0; i < testVector.size(); ++i) {
        std::cout << testVector[i] << std::endl;
    }
}
void testTask8(const std::vector<std::vector<int>>& testVector1,
               const std::vector<std::vector<int>>& testVector2) {
    multiplyMatrices(testVector1, testVector2);
}

std::vector<int> testVector1 = {0, 0, 0, 34, -34, 0, 45};
std::vector<int> testVector2 = {0, 0, 0, 34, -34, 0, 45};
std::vector<int> testVector3 = {0, 0, 0};
std::vector<int> testVector4 = {12, -45, 0, 0, -23, 34, -56, 0, 0, 65, 78};
std::vector<int> testVector5 = {};
std::vector<int> testVector6 = {};
std::vector<int> testVector7 = {1, 2, 5, 7, 3, 4, 6};
std::vector<std::vector<int>> testVector8 = {
        {1, 0, 2}
};
std::vector<std::vector<int>> testVector9 = {
        {2, 1},
        {11, 5},
        {1, 1},
};
std::vector<int> testVector10 = {1, 2, 6, 9, 34, 62, 65};
std::vector<int> testVector11 = {1, 3, 6, 8, 12, 62, 110};
int main() {
    //testTask8(testVector8, testVector9);
    //testTask7(testVector7);
    //testTask6(testVector5, -1);
    //testTask5(testVector7);
    //testTask4(testVector10, testVector6);
    //testTask3(testVector1);
    //testTask2(testVector7);
    //testTask1();
    multiplyMatrices(testVector8, testVector9);
    return 0;
}
