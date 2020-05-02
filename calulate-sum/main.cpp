#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4, n5;

    std::cout << "Enter five intergers, seperated by spec: ";
    std::cin >> n1 >> n2 >> n3 >> n4 >>n5;

    int sum = n1 + n2 + n3 + n4 + n5;

    float average = sum/5.0f;

    std::cout << "Sum of these number is: " << sum << std::endl;
    std::cout << "Average value is: " << average << std::endl;

    return 0;
}
