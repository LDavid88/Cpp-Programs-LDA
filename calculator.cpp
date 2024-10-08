# include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**********CALCULATOR**********\n";

    std::cout << "Enter either (+, -, *, /): ";
    std::cin >> op;
    
    std::cout << "First number: ";
    std::cin >> num1;

    std::cout << "Second number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result;
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result;
            break;
        default:
            std::cout << "Enter a valid operator (+, -, *, /)";
            break;
    }

    return 0;
}