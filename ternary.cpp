//ternary operator allows you to compare

#include <iostream>
#include <string>

int main()
{
    int answer = 11;
    std::cout << "Guess the number: " << std::endl;
    int guess;
    std::cin >> guess;

    guess == answer ? std::cout << "Good job!\n " : std::cout << "Not too great, try again\n";
    /*this implies if guess == answer, print good job else print not too great....*/
}