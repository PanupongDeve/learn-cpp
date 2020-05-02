#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int n;

   do {
        std::cout << "Enter a natural number n: ";
        std::cin >> n;

   } while ( n <= 0);

    double sqrt_n = std::sqrt(n);

    std::cout << "sqrt (" << n << ") = " <<sqrt_n << std::endl;

    return 0;
}
