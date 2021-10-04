//C++ function to calculate a number raised to a power using the pow function

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int main()
{
    int base, exponent;
    cout << "What is the base?: " << std::endl;
    cin >> base;

    cout << "What is the exponent?: " << std::endl;
    cin >> exponent;

    double power = pow(base, exponent); //the func pow has the data type double
    cout << power << std::endl;
}