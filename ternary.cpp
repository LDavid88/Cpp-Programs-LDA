#include <iostream>

// ternary condition
int main() {
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expresion1 : expresion2;

    //int grade = 75;
    //grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    int num = 4;
    num % 2 == 0 ? std::cout << "Your number is even" : std::cout << "Your number is odd";

    return 0;
}