#include <iostream>
#include <cmath>

// cout ---> console output
// cin ----> console input
/*
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
*/

int main() {
    double x = 3.1;
    double y = 4;
    double z;

    //z = std::max(x, y);
    //z = std::min(x, y);
    //z = pow(2, 4);
    //z = sqrt(9);
    //z = abs(-3);
    //z = round(x);
    //z = ceil(x);
    z = floor(x);

    std::cout << z;

    return 0;
}