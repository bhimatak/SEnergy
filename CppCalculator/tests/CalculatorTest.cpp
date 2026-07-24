#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <calculator.h>
#include <MockCalculator.h>
#include <cmath>
#include <limits>

using ::testing::Return;
using ::testing::DoubleEq;
using ::testing::Throw;
using ::testing::DoAll;
using ::testing::SaveArg;

// ============================================================================
// Calculator Unit Tests (Real Implementation)
// ============================================================================

class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

// --- Add Tests ---

TEST_F(CalculatorTest, Add_PositiveNumbers) {
    EXPECT_DOUBLE_EQ(calc.add(2.0, 3.0), 5.0);
}

TEST_F(CalculatorTest, Add_NegativeNumbers) {
    EXPECT_DOUBLE_EQ(calc.add(-2.0, -3.0), -5.0);
}

TEST_F(CalculatorTest, Add_MixedSign) {
    EXPECT_DOUBLE_EQ(calc.add(-2.0, 3.0), 1.0);
}

TEST_F(CalculatorTest, Add_Zero) {
    EXPECT_DOUBLE_EQ(calc.add(5.0, 0.0), 5.0);
}

TEST_F(CalculatorTest, Add_DecimalPrecision) {
    EXPECT_DOUBLE_EQ(calc.add(0.1, 0.2), 0.3);
}

// --- Subtract Tests ---

TEST_F(CalculatorTest, Subtract_PositiveNumbers) {
    EXPECT_DOUBLE_EQ(calc.subtract(10.0, 4.0), 6.0);
}

TEST_F(CalculatorTest, Subtract_ResultNegative) {
    EXPECT_DOUBLE_EQ(calc.subtract(3.0, 7.0), -4.0);
}

TEST_F(CalculatorTest, Subtract_SameNumbers) {
    EXPECT_DOUBLE_EQ(calc.subtract(5.0, 5.0), 0.0);
}

// --- Multiply Tests ---

TEST_F(CalculatorTest, Multiply_PositiveNumbers) {
    EXPECT_DOUBLE_EQ(calc.multiply(3.0, 4.0), 12.0);
}

TEST_F(CalculatorTest, Multiply_ByZero) {
    EXPECT_DOUBLE_EQ(calc.multiply(5.0, 0.0), 0.0);
}

TEST_F(CalculatorTest, Multiply_NegativeNumbers) {
    EXPECT_DOUBLE_EQ(calc.multiply(-3.0, -4.0), 12.0);
}

TEST_F(CalculatorTest, Multiply_MixedSign) {
    EXPECT_DOUBLE_EQ(calc.multiply(-3.0, 4.0), -12.0);
}

// --- Divide Tests ---

TEST_F(CalculatorTest, Divide_PositiveNumbers) {
    EXPECT_DOUBLE_EQ(calc.divide(10.0, 2.0), 5.0);
}

TEST_F(CalculatorTest, Divide_ResultFraction) {
    EXPECT_DOUBLE_EQ(calc.divide(1.0, 3.0), 1.0 / 3.0);
}

TEST_F(CalculatorTest, Divide_ByZero_ThrowsException) {
    EXPECT_THROW(calc.divide(10.0, 0.0), std::runtime_error);
}

TEST_F(CalculatorTest, Divide_ByZero_ExceptionMessage) {
    try {
        calc.divide(10.0, 0.0);
        FAIL() << "Expected std::runtime_error";
    } catch (const std::runtime_error& e) {
        EXPECT_STREQ(e.what(), "Division by zero");
    }
}

// --- Power Tests ---

TEST_F(CalculatorTest, Power_PositiveExponent) {
    EXPECT_DOUBLE_EQ(calc.power(2.0, 3.0), 8.0);
}

TEST_F(CalculatorTest, Power_ZeroExponent) {
    EXPECT_DOUBLE_EQ(calc.power(5.0, 0.0), 1.0);
}

TEST_F(CalculatorTest, Power_NegativeExponent) {
    EXPECT_DOUBLE_EQ(calc.power(2.0, -1.0), 0.5);
}

TEST_F(CalculatorTest, Power_FractionalExponent) {
    EXPECT_DOUBLE_EQ(calc.power(9.0, 0.5), 3.0);
}

// --- SquareRoot Tests ---

TEST_F(CalculatorTest, SquareRoot_PerfectSquare) {
    EXPECT_DOUBLE_EQ(calc.squareRoot(9.0), 3.0);
}

TEST_F(CalculatorTest, SquareRoot_Zero) {
    EXPECT_DOUBLE_EQ(calc.squareRoot(0.0), 0.0);
}

TEST_F(CalculatorTest, SquareRoot_NonPerfectSquare) {
    EXPECT_DOUBLE_EQ(calc.squareRoot(2.0), std::sqrt(2.0));
}

TEST_F(CalculatorTest, SquareRoot_NegativeNumber_ThrowsException) {
    EXPECT_THROW(calc.squareRoot(-1.0), std::runtime_error);
}

TEST_F(CalculatorTest, SquareRoot_NegativeNumber_ExceptionMessage) {
    try {
        calc.squareRoot(-1.0);
        FAIL() << "Expected std::runtime_error";
    } catch (const std::runtime_error& e) {
        EXPECT_STREQ(e.what(), "Square root of negative number");
    }
}

// --- Edge Cases ---

TEST_F(CalculatorTest, LargeNumbers) {
    EXPECT_DOUBLE_EQ(calc.add(1e15, 1e15), 2e15);
}

TEST_F(CalculatorTest, SmallNumbers) {
    EXPECT_DOUBLE_EQ(calc.add(1e-15, 1e-15), 2e-15);
}

TEST_F(CalculatorTest, InfinityHandling) {
    EXPECT_DOUBLE_EQ(calc.add(std::numeric_limits<double>::infinity(), 1.0),
                     std::numeric_limits<double>::infinity());
}

// ============================================================================
// MockCalculator Tests (Demonstrating Mock Usage)
// ============================================================================

class MockCalculatorTest : public ::testing::Test {
protected:
    MockCalculator mockCalc;
};

TEST_F(MockCalculatorTest, Add_Expectation) {
    EXPECT_CALL(mockCalc, add(2.0, 3.0))
        .WillOnce(Return(5.0));

    double result = mockCalc.add(2.0, 3.0);
    EXPECT_DOUBLE_EQ(result, 5.0);
}

TEST_F(MockCalculatorTest, Divide_ByZero_Expectation) {
    EXPECT_CALL(mockCalc, divide(10.0, 0.0))
        .WillOnce(Throw(std::runtime_error("Division by zero")));

    EXPECT_THROW(mockCalc.divide(10.0, 0.0), std::runtime_error);
}

TEST_F(MockCalculatorTest, MultipleCalls_Sequence) {
    EXPECT_CALL(mockCalc, add(1.0, 2.0)).WillOnce(Return(3.0));
    EXPECT_CALL(mockCalc, add(3.0, 4.0)).WillOnce(Return(7.0));

    EXPECT_DOUBLE_EQ(mockCalc.add(1.0, 2.0), 3.0);
    EXPECT_DOUBLE_EQ(mockCalc.add(3.0, 4.0), 7.0);
}

TEST_F(MockCalculatorTest, AnyArguments) {
    EXPECT_CALL(mockCalc, multiply(::testing::_, ::testing::_))
        .WillOnce(Return(100.0));

    EXPECT_DOUBLE_EQ(mockCalc.multiply(5.0, 20.0), 100.0);
}

TEST_F(MockCalculatorTest, VerifyCallCount) {
    EXPECT_CALL(mockCalc, add(::testing::_, ::testing::_))
        .Times(3)
        .WillRepeatedly(Return(0.0));

    mockCalc.add(1.0, 2.0);
    mockCalc.add(3.0, 4.0);
    mockCalc.add(5.0, 6.0);
}

TEST_F(MockCalculatorTest, SaveArgumentAndReturn) {
    double captured_a, captured_b;
    EXPECT_CALL(mockCalc, add(::testing::_, ::testing::_))
        .WillOnce(DoAll(
            ::testing::SaveArg<0>(&captured_a),
            ::testing::SaveArg<1>(&captured_b),
            Return(10.0)
        ));

    mockCalc.add(4.0, 6.0);
    EXPECT_DOUBLE_EQ(captured_a, 4.0);
    EXPECT_DOUBLE_EQ(captured_b, 6.0);
}

// ============================================================================
// Dependency Injection Example (Using Mock in Production Code)
// ============================================================================

class CalculatorService {
public:
    explicit CalculatorService(ICalculator& calculator) : m_calculator(calculator) {}

    double computeAverage(double a, double b) {
        double sum = m_calculator.add(a, b);
        return m_calculator.divide(sum, 2.0);
    }

    double computeHypotenuse(double a, double b) {
        double aSq = m_calculator.power(a, 2.0);
        double bSq = m_calculator.power(b, 2.0);
        double sum = m_calculator.add(aSq, bSq);
        return m_calculator.squareRoot(sum);
    }

private:
    ICalculator& m_calculator;
};

class CalculatorServiceTest : public ::testing::Test {
protected:
    MockCalculator mockCalc;
    CalculatorService service{mockCalc};
};

TEST_F(CalculatorServiceTest, ComputeAverage) {
    EXPECT_CALL(mockCalc, add(4.0, 6.0)).WillOnce(Return(10.0));
    EXPECT_CALL(mockCalc, divide(10.0, 2.0)).WillOnce(Return(5.0));

    EXPECT_DOUBLE_EQ(service.computeAverage(4.0, 6.0), 5.0);
}

TEST_F(CalculatorServiceTest, ComputeHypotenuse) {
    EXPECT_CALL(mockCalc, power(3.0, 2.0)).WillOnce(Return(9.0));
    EXPECT_CALL(mockCalc, power(4.0, 2.0)).WillOnce(Return(16.0));
    EXPECT_CALL(mockCalc, add(9.0, 16.0)).WillOnce(Return(25.0));
    EXPECT_CALL(mockCalc, squareRoot(25.0)).WillOnce(Return(5.0));

    EXPECT_DOUBLE_EQ(service.computeHypotenuse(3.0, 4.0), 5.0);
}

// ============================================================================
// Main
// ============================================================================

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
