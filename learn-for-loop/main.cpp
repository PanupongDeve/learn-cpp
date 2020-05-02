#include <iostream>

using namespace std;

int main()
{
    int n;

    std::cout << "Enter int n: ";
    std::cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        int number;
        std::cout << "Enter: " << i << ". number: ";
        std::cin >> number;

        sum += number;

    }

    std::cout << "Sum of " << n << " entered numbers is: "<< sum << std::endl;

    return 0;
}
