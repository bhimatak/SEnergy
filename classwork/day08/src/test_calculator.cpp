/*
 g++ ./src/test_calculator.cpp ./src/Calc.cpp -I C:/MinGW/include/ -I ./inc -lgtest -l gtest_main -o test_calcultor.exe

 .\test_calcultor.exe

*/

#include <gtest/gtest.h>
#include <Calc.h>

TEST(CalculatorTest, AddsTwoPositiveNumbers) {
    Calc calc;
    ASSERT_EQ(calc.addition(2, 3), 6);
    std::cout<<"Calc EXPECT is Done"<<std::endl;
}

TEST(CalculatorTest, SubtractsCorrectly) {
    Calc calc;
    EXPECT_EQ(calc.subtraction(10, 4), 6);
}


