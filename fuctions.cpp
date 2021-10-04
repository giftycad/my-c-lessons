//C++ program to print two numbers using functions

#include <iostream>

int func(int, float);

int main()
{
    int a = 4;
    float b = 3.2;
    func(a, b);
    return 0;
}

int func(int n1, float n2)
{
    std::cout << "First number is: " << n1 << std::endl;
    std::cout << "Second number is: " << n2 << std::endl;

    return 0;
}