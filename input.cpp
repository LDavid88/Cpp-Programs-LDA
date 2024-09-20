#include <iostream>

// cout ---> console output
// cin ----> console input
int main() {
    std::string name;
    int age;

    std::cout << "What is your name?: ";
    std::cin >> name;

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "This is your age " << age;

    return 0;
}