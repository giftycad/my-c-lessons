#include <iostream>
#include <vector>

/*
int main()
{
    std::vector<int> data = {1, 2, 3};
    data.push_back(12); //for adding a new element
    data.pop_back();//removes last element of vector
    //std::cout << data[3] << std::endl;
    std::cout << data[data.size() - 1] << std::endl; //for grabbing the last element
}
*/

//passing vectors to function

void print_vector(std::vector<int> data)
{
    data.push_back(12); //modifies vector
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> data = {1, 2, 3};
    print_vector(data);
}