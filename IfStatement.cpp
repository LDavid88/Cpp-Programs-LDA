#include <iostream>

// If statement
/*
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
*/

// Switches
int main() {
    int month;
    std::cout << "Enter the month (1 - 12): ";
    std::cin >> month;

    switch(month) {
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is Jun";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
        default:
            std::cout << "Enter only numbers (1 - 12)";
    }
    return 0;
}