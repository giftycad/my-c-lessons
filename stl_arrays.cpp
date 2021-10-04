#include <iostream>
#include <vector>
#include <array>

void print_array(std::array<int, 20> &data, int size) //to prevent outputting zeros in addition to data you can use reference and pass in size. uses less memory space
{

    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
    std::array<int, 20> data = {1, 2, 3};
    print_array(data, 3); //pass in size 3
}