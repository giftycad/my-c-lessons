//C++ program toread unknown number of inputs

#include <iostream>
int main()
{
    int sum = 0, value = 0;
    std::cout << "Please enter your chose numbers and type CLEAR when you are done: " << std::endl;
    std::cin >> value;

    /*compare using istream(cin ). until an end-of-file is entered 
    or a value with an invalid data type is entered eg. string. it keeps adding else is terminates and 
    gives the value*/

    while (std::cin >> value)
    {
        sum += value;
    }

    std::cout << "Sum of total value is: " << sum << std::endl;

    return 0;
}