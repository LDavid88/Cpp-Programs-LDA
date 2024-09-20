#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
// ---------------------------
//Both are okey
/*
using text_t = std::string;
using number_t = int;

int main() {
    text_t firstName = "David";
    number_t age = 10;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}
*/

//Type convertion:
int main() {
    int correct = 8;
    int questions = 10;
    //If we did not add (double) the result would be 0
    double score = correct / (double)questions * 100;

    std::cout << score << '\n';

    return 0;
}