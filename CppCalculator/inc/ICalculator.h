#ifndef ICALCULATOR_H
#define ICALCULATOR_H

class ICalculator {
public:
    virtual ~ICalculator() = default;

    virtual double add(double a, double b) = 0;
    virtual double subtract(double a, double b) = 0;
    virtual double multiply(double a, double b) = 0;
    virtual double divide(double a, double b) = 0;
    virtual double power(double base, double exp) = 0;
    virtual double squareRoot(double value) = 0;
};

#endif
