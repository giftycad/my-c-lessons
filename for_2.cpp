//c++ program to calculate numbers from 1 - 10
#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    std::cout << "Total sum of numbers 1 - 10 is: " << sum << std::endl;
    return 0;
}