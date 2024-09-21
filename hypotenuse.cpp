#include <iostream>
#include <cmath>

int main() {
    // Remember pythagoras theorem: c^2 = a^2 + b^2
    double a;    // Side a of triangle
    double b;    // Side b of triangle

    std::cout << "This is a calculator for the Hypotunuse of a triangle...\n";

    std::cout << "Side a: ";
    std::cin >> a;

    std::cout << "Side b: ";
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The Hypotenuse of the triangle is: " << c;

    return 0;
}