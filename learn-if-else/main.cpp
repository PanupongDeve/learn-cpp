#include <iostream>

using namespace std;

int main()
{
    int age;
    std::cout << "Enter person's age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "Person is an adult!" << std::endl;
    } else if (age > 13) {
        std::cout << "Person is a teenager!" << std::endl;
    } else if (age > 3) {
        std::cout << "Persion is a kid!" << std::endl;
    } else {
        std::cout << "BABY!" << std::endl;
    }

    return 0;
}
