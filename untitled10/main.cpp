#include <iostream>
#include "cmath"
#include "vector"
#include <cassert>

using std::cout, std::cin, std::endl, std::max, std::vector, std::string;

const double EPSILON = pow(10, -6);

bool doubleIsEqual(double a, double b) {
    return abs(a - b) <= EPSILON;
}

double sum(const double &a, const double &b);

double sub(const double &a, const double &b);

double mul(const double &a, const double &b);

double division(const double &a, const double &b);

int mod(const int &a, const int &b);

double negate(double a);

static double exponent(const double &a);

unsigned long long factorial(unsigned long long);

void testSum();

void testFactorial();

enum Operation {
    Sum,
    Sub,
    Mul,
    Division,
    Mod,
    Negate = 100, // Unary oporations starts from 100, Binary from 0
    Exp,
    Factorial,
};

Operation askForOperation() {
    string menu = "sum - 0,\n neg - 1,\n mult - 2,\n division - 3,\n mod - 4,\n negate - 100,\n exp - 101,\n factorial - 102";
    int numberOfOperation;
    cout << menu << endl;
    cout << "Operation: ";
    cin >> numberOfOperation;
    return (Operation) numberOfOperation;
}

bool checkValueOfTheVariables(Operation operation, double &);

bool checkValueOfTheVariables(Operation operation, double &, double &);

void askForNumber(double &);


bool isUnary(Operation);

double applyUnaryOperation(Operation, double x);

double applyBinaryOperation(Operation, double a, double b);

int main() {
    //cout << "Start" << endl;
    //testSum();
    //cout << "end";

    //cout << "Start" << endl;
    //testFactorial();
    //cout << "end";

    string varType;
    while (true) {
        cout << "Type or exit (to terminate proces):" << endl;
        cin >> varType;
        if (varType == "int") {
            Operation operation = askForOperation();
            int result;
            if (isUnary(operation)) {
                double x;
                askForNumber(x);
                result = applyUnaryOperation(operation, x);
                cout << result << endl;
            } else {
                double a;
                askForNumber(a);
                double b;
                askForNumber(b);
                result = applyBinaryOperation(operation, a, b);
                cout << result << endl;
            }
        }
        if (varType == "double") {
            Operation operation = askForOperation();
            double result;
            if (isUnary(operation)) {
                double x;
                askForNumber(x);
                result = applyUnaryOperation(operation, x);
                cout << result << endl;
            } else {
                double a;
                askForNumber(a);
                double b;
                askForNumber(b);
                result = applyBinaryOperation(operation, a, b);
                cout << result << endl;
            }
        }
        if (varType == "exit"){
            return 0;
        }
    }
}


void askForNumber(double &arg) {
    cout << "Input the number: " << endl;
    cin >> arg;
}

bool isUnary(Operation operation) {
    return operation > 99 ? true : false;
}

bool checkValueOfTheVariables(Operation operation, double &x) {
    switch (operation) {
        case Factorial:
            if (x < 0) {
                cout << "Factorail of a negative number!!!" << endl;
                return false;
            }
            break;
        default:
            break;
    }
    return true;
}

bool checkValueOfTheVariables(Operation operation, double &a, double &b) {
    switch (operation) {
        case Division:
            if (doubleIsEqual(b, EPSILON)) {
                cout << "You can't divide by 0" << endl;
                return false;
            }
            break;
        default:
            break;
    }
    return true;
}

double applyUnaryOperation(Operation operation, double x) {
    double result;
    switch (operation) {
        case Negate:
            result = negate(x);
            break;
        case Exp:
            result = exponent(x);
            break;
        case Factorial: // Do something with type of the function
            if (checkValueOfTheVariables(operation, x)) {
                return factorial(x);
            }
            break;
        default:
            break;
    }
    return result;
}

double applyBinaryOperation(Operation operation, double a, double b) {
    double result;
    switch (operation) {
        case Sum :
            result = sum(a, b);
            break;
        case Sub :
            result = sub(a, b);
            break;
        case Mul :
            result = mul(a, b);
            break;
        case Division :
            if (checkValueOfTheVariables(operation, a, b)) {
                result = division(a, b);
            }
            break;
        case Mod :
            result = mod(a, b);
            break;
        default:
            break;
    }
    return result;
}

int sum(const int &a, const int &b) {
    return a + b;
}

int sub(const int &a, const int &b) {
    return a - b;
}

int mul(const int &a, const int &b) {
    return a * b;
}

int division(const int &a, const int &b) {
    return a / b;
}

double sum(const double &a, const double &b) {
    return a + b;
}

double sub(const double &a, const double &b) {
    return a - b;
}

double mul(const double &a, const double &b) {
    return a * b;
}

double division(const double &a, const double &b) {
    return a / b;
}

int mod(const int &a, const int &b) {
    return a % b;
}

double negate(double a) {
    return -a;
}

unsigned long long factorial(unsigned long long a) {
    return (a > 1) ? a * factorial(a - 1) : 1;
}

static double exponent(const double &a) {
    double result = 1;
    double tmp1 = 1;
    int i = 1;
    while (!doubleIsEqual(tmp1, EPSILON)) {
        tmp1 = tmp1 * a / i;
        result += tmp1;
        ++i;
    }
    return result;
}

//test
void testSum() {
    assert(sum(0, 0) == 0 && "sum of 0 should be 0");
    assert(sum(0, 1) == 1 && "sum 0 and Number should be Number");
    assert(sum(1, 0) == 1 && "sum 0 and Number should be Number");
    assert(sum(42, 0) == 42 && "sum 0 and Number should be Number");
    assert(sum(42, -42) == 0 && "sum oposite numbers should be 0");
    assert(sum(-42, 42) == 0 && "sum oposite numbers should be 0");
    assert(sum(-1, 42) == 41 && "sum oposite numbers should be 0");
    assert(sum(-42, 1) == -41 && "sum oposite numbers should be 0");
    assert(sum(1, 2'147'483'646) == 2'147'483'647 && "sum oposite numbers should be 0");
    assert(sum(2'147'483'646, 1) == 2'147'483'647 && "sum oposite numbers should be 0");
}

void testFactorial() {
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(2) == 2);
    assert(factorial(3) == 6);
    assert(factorial(10) == 3'628'800);
}

