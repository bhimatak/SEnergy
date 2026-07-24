#include <calculator.h>
#include <cmath>
#include <stdexcept>

Calculator::Calculator() {}
Calculator::~Calculator() {}

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}

double Calculator::power(double base, double exp) {
    return std::pow(base, exp);
}

double Calculator::squareRoot(double value) {
    if (value < 0) {
        throw std::runtime_error("Square root of negative number");
    }
    return std::sqrt(value);
}
