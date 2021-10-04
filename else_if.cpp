//C++ program for a restaurant for the customer to select either coffee or tea
#include <iostream>

int main()
{

    int option;

    std::cout << "Hi there! Welcome to Gift cafe " << std::endl;
    std::cout << "Enter:" << std::endl
              << "1. Coffee" << std::endl
              << "2.Tea " << std::endl;
    std::cin >> option;

    if (option == 1)
    {
        std::cout << "You ordered for coffee. " << std::endl;
    }
    else if (option == 2)
    {
        std::cout << "You ordered for tea. " << std::endl;
    }
    else
    {
        std::cout << "Please choose from either options 1. or 2. Thank you. " << std::endl;
    }

    return 0;
}