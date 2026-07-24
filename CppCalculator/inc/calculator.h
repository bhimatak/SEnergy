#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <ICalculator.h>

class Calculator : public ICalculator {
public:
    Calculator();
    ~Calculator() override;

    double add(double a, double b) override;
    double subtract(double a, double b) override;
    double multiply(double a, double b) override;
    double divide(double a, double b) override;
    double power(double base, double exp) override;
    double squareRoot(double value) override;
};

#endif
