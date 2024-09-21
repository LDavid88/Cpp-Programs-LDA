#include <iostream>

// If statement
int main() {
    int age;
    
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 18) {
        std::cout << "You are yung";
    } else if (age < 49) {
        std::cout << "You are an adult";
    } else {
        std::cout << "You are old";
    }

    return 0;
}