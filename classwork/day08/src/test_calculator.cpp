#include <gtest.h>
#include <Calc.h>

TEST(CalculatorTest, AddsTwoPositiveNumbers) {
    Calc calc;
    EXPECT_EQ(calc.addition(2, 3), 5);
}

TEST(CalculatorTest, SubtractsCorrectly) {
    Calc calc;
    EXPECT_EQ(calc.subtraction(10, 4), 6);
}


