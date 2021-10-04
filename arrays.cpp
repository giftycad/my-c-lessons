#include <iostream>
#include <limits>
/*
int main()
{
    int guesses[10] = {20, 39, 14, 25, 23};
    int num_elements = 5;
    int size = sizeof(guesses) / sizeof(int); //sizeof(guesses) gives the total value of space occupied by all the elements(20)
    std::cout << size << std::endl;           //dividing by sizeof (int) gives the number elements (5)
    for (int i = 0; i < num_elements; i++)    // sizeof (guesses)/ sizeof (guesses[0]) also works
    {
        std::cout << guesses[i] << "\t";
    }
    return 0;
}
*/
//how to use arrays when passing them to functions
/*
void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    int guesses[10] = {20, 39, 14, 25, 23};
    int size = sizeof(guesses) / sizeof(int);
    print_array(guesses, 5);
}
*/

//how to fill an array from user input
void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    const int SIZE = 100;
    int guesses[SIZE];
    int count = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (std::cin >> guesses[i]) //this looping allows the user to input and stop
        {                           //at any point the user chooses without having to fill
            count++;                //all the space allocated to size. in this case you can enter
        }                           //5 numbers with no consequence even though 100 was allocated to SIZE
        else
        {
            break;
        }
    }
    print_array(guesses, count);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //both .clear and .ignore clears the input stream since
    return 0;                                                           //to break inputting from the user, the user has to enter a char
} //and in oreder to clear the stream, .clear and .ignore is used