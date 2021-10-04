//this is our first guessing game//we are replacing places where arrays was used with vectors
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

void print_vector(std::vector<int> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << "\t";
    }
    std::cout << "\n";
}
void playGame()
{
    //int guesses[251];
    //int guess_count = 0;
    std::vector<int> guesses;

    int random = rand() % 251; //generates secret number between 0 - 250
    std::cout << random << std::endl;
    std::cout << "Guess the number: " << std::endl;

    while (true)
    {

        int guess;
        std::cin >> guess;
        guesses.push_back(guess);

        //guesses[guess_count++] = guess; //guesses[guess_count++] is also valid.keeps track of the number of inputs by user

        if (guess == random)
        {
            std::cout << "You won!!" << std::endl;
            break;
        }
        else if (guess < random)
        {
            std::cout << "Number is too low" << std::endl;
        }
        else
        {
            std::cout << "Number is too high" << std::endl;
        }
    }
    print_vector(guesses);
}

int main()
{
    int choice;
    do
    {

        srand(time(NULL)); //using srand(time(null)) helps the number to change constantly(initialises random seed)
        std::cout << "0. Quit" << std::endl;
        std::cout << "1. Play Game" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "Thanks for nothing \n";
            break;

        case 1:
            playGame();
            break;
        }

    } while (choice != 0);
}