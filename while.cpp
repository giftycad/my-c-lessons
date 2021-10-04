//write a C++ program to count from one to any number and sum it up

#include <iostream>

using std::cin;
using std::cout;
int main()
{
    int counter = 1, sum = 0, new_val;

    cout << "Enter any number of your choice to sum up" << std::endl;
    cin >> new_val;
    while (counter <= new_val)
    {

        sum += counter;
        counter = counter + 1;
    }
    cout << "The total summation of " << new_val << "is " << sum << std::endl;
    return 0;
}