#include "vector"
#include "iostream"
#include "cmath"

using std::cout;

//done
int leastMissingDigit(int n) {
    int resultNumber;

    if (n == 0) {
        resultNumber = 1;
        return resultNumber;
    }

    n = std::abs(n);
    std::string numbers = std::to_string(n);
    std::string allNumbers = "0123456789";
    for (int i = 0; allNumbers[i] != '\0'; ++i) {
        if (numbers.find(allNumbers[i]) == std::string::npos) {
            resultNumber = allNumbers[i]- '0';
            return resultNumber;
        }
    }

return 0;
}
