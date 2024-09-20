#include <iostream>

//Starting with output:
/*
int main() {
    std::cout << "Hello" << '\n';
    std::cout << "World!" <<'\n';
    return 0;
}
*/

//variables
int main() {
    int x; //declaration
    x = 5;
    int y = 6;

    std::cout << x << '\n';
    std::cout << y << '\n';

    int age = 21;
    int year = 2023;
    double days = 7.5;

    std::cout << days << '\n';

    char grade = 'A';
    char initial = 'B';

    std::cout << initial << '\n';

    bool isStudent = true;
    bool isGood = false;

    std::cout << isGood << '\n';

    std::string name = "David";

    std::cout << "Hello " << name << '\n';
    
    return 0; 
}