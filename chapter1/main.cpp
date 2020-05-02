#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int year = 2020, mon = 3, day = 16;
    std::cout << "Today is: "
        << std::setw (2) << std::setfill ('0') << day
        << std::setw (2) << std::setfill ('0') << mon
        << "."
        << year << ".";

    return 0;
}
