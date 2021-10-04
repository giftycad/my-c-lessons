//C++ program to create a custom function

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

double power(double base, int exponent) //our custom function is declared and defined
{
    double result = 1;

    for (int i = 0; i < exponent; i++)
        ;
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int base, exponent;
    cout << "What is the base?: " << std::endl;
    cin >> base;

    cout << "What is the exponent?: " << std::endl;
    cin >> exponent;

    double myPower = power(base, exponent); //we call our custom function power. Assign a variable to your function

    //double power = pow(base, exponent);//the func pow has the data type double
    cout << myPower << std::endl;
}