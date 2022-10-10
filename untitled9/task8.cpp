#include <vector>
#include "iostream"

using std::cout, std::cin, std::endl;

std::vector<std::vector<int>> multiplyMatrices(
        const std::vector<std::vector<int>> &firstMatrix,
        const std::vector<std::vector<int>> &secondMatrix
) {
    int row1 = firstMatrix.size();
    int column1 = firstMatrix[0].size();
    int row2 = secondMatrix.size();
    int column2 = secondMatrix[0].size();

    if (column1 != row2) {
        cout << "Количество столбцов в 1 матрице не равно количеству строк во 2";
        exit(0);
    }

    std::vector<std::vector<int>> thirdMatrix(column2, std::vector<int>(row1));

    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < column2; ++j) {
            thirdMatrix[i][j] = 0;
            for (int k = 0; k < column1; ++k) {
                thirdMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    for (int i = 0; i < row1; i++){
        for (int j = 0; j < column2; j++)
            cout << thirdMatrix[i][j] << ' ';
        cout << endl;
    }

    return thirdMatrix;
}


