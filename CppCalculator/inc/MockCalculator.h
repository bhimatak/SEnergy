#ifndef MOCKCALCULATOR_H
#define MOCKCALCULATOR_H

#include <gmock/gmock.h>
#include <ICalculator.h>

class MockCalculator : public ICalculator {
public:
    MOCK_METHOD(double, add, (double a, double b), (override));
    MOCK_METHOD(double, subtract, (double a, double b), (override));
    MOCK_METHOD(double, multiply, (double a, double b), (override));
    MOCK_METHOD(double, divide, (double a, double b), (override));
    MOCK_METHOD(double, power, (double base, double exp), (override));
    MOCK_METHOD(double, squareRoot, (double value), (override));
};

#endif
