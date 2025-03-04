#include <iostream>

int main() {

    char op;

    double num1;
    double num2;

    double result;

    std::cout << "\n********** Terminal Calculator **********" << "\n\n";

    std::cout << "Enter Operator (+, -, /, *): ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result;
            break;

        case '-':
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result;
            break;

        case '*':
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result;
            break;  

        case '/':
            result = num1 / num2;
            std::cout << num1 << " * " << num2 << " = " << result;
            break;  

        default:
            std::cout << "Please enter either +, -, *, or /";
            break;   
    }

    std::cout << "\n\n****************************************";

    return 0;
}