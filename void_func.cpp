//C++ program using void
//using namespace std;//is known as using directive
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

void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent); //void func calls custom function, power. Assign a variable to your function
    cout << base << "raised to the power " << exponent << "is " << myPower << std::endl;
}

int main() //main func calls void func
{
    double base;
    int exponent;
    cout << "What is the base?: " << std::endl;
    cin >> base;

    cout << "What is the exponent?: " << std::endl;
    cin >> exponent;
    print_pow(base, exponent); //no variable is assigned to a void function when calling it, since it doesn't return anything

    //double power = pow(base, exponent);//the func pow has the data type double
}
