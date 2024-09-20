#include <iostream>

//Const keyword
/*
int main() {
    const double PI = 3.14159; // This defines a constant so it cannot be changed.
    double radius = 10;
    double circunference = 2 * PI * radius;

    std::cout << circunference << "cm";

    return 0;
}
*/

//Namespace
namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}
int main() {
    using namespace first;
    
    std::cout << x << '\n';
    // if you want to use a different value, refer to the namspace name.
    std::cout << second::x;

    return 0;
}