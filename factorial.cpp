//calculating factorial using for, while loop and do-while loop
#include <iostream>
#include <string>

//for loop
/*
int main()
{
    int factorial = 5;
    int fact = factorial;
    for (int i = factorial - 1; i > 1; i--)
    {
        factorial = factorial * i;
    }
    std::cout << "The factorial of " << fact << " is : " << factorial << std::endl;
    return 0;
}
*/

//while loop
/*
int main()
{
    int factorial = 5; //factorial = 5*4*3*2*1
    int i = factorial - 1;
    while (i > 1)
    {
        factorial *= i;
        i--;
    }
    std::cout << "Factorial is " << factorial << std::endl;
}
*/

//do-while loop

int main()
{
    std::string password = "tacos123";
    std::string guess;
    do
    {
        std::cout << "Please enter your password: " << std::endl;
        std::cin >> guess;

    } while (guess != password);
}