#include <iostream>

using namespace std;

int main()
{
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    int squared = number * number;

    std::cout << "Squared number " << " is " << squared << std::endl;

    std::cout << "Squared number " << number << " is " << number * number;

    return 0;
}
