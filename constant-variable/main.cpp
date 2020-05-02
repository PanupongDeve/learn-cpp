#include <iostream>

#define PI 3.14

using namespace std;

int main()
{
    std::cout << "Enter circle radius: ";
    float radius;

    std::cin >> radius;

    float circle_area = PI * radius * radius;

    std::cout << "Circle's radius: " << circle_area << std::endl;
    return 0;
}
