#include <iostream>
#include <calculator.h>

void printMenu() {
    std::cout << "\n=== Calculator ===\n";
    std::cout << "1. Add\n";
    std::cout << "2. Subtract\n";
    std::cout << "3. Multiply\n";
    std::cout << "4. Divide\n";
    std::cout << "5. Power\n";
    std::cout << "6. Square Root\n";
    std::cout << "0. Exit\n";
    std::cout << "Choice: ";
}

int main() {
    Calculator calc;
    int choice;
    double a, b, result;

    do {
        printMenu();
        std::cin >> choice;

        if (choice == 0) break;

        switch (choice) {
            case 1:
                std::cout << "Enter two numbers: ";
                std::cin >> a >> b;
                result = calc.add(a, b);
                std::cout << "Result: " << result << std::endl;
                break;
            case 2:
                std::cout << "Enter two numbers: ";
                std::cin >> a >> b;
                result = calc.subtract(a, b);
                std::cout << "Result: " << result << std::endl;
                break;
            case 3:
                std::cout << "Enter two numbers: ";
                std::cin >> a >> b;
                result = calc.multiply(a, b);
                std::cout << "Result: " << result << std::endl;
                break;
            case 4:
                std::cout << "Enter numerator and denominator: ";
                std::cin >> a >> b;
                try {
                    result = calc.divide(a, b);
                    std::cout << "Result: " << result << std::endl;
                } catch (const std::exception& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            case 5:
                std::cout << "Enter base and exponent: ";
                std::cin >> a >> b;
                result = calc.power(a, b);
                std::cout << "Result: " << result << std::endl;
                break;
            case 6:
                std::cout << "Enter number: ";
                std::cin >> a;
                try {
                    result = calc.squareRoot(a);
                    std::cout << "Result: " << result << std::endl;
                } catch (const std::exception& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            default:
                std::cout << "Invalid choice\n";
        }
    } while (choice != 0);

    std::cout << "Goodbye!\n";
    return 0;
}
