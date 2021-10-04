//enum class is used when you want elements available in enum to be available to it only
#include <iostream>
#include <string>

int main()
{
    enum class Season //Season begins with a cap
    {
        summer,
        spring,
        fall,
        winter
    };
    Season now = Season::winter; //you prefix every element of season with season

    switch (now)
    {
    case Season::summer:
        break;

    case Season::spring:
        break;

    case Season::fall:
        break;

    case Season::winter:
        std::cout << "Hey keep warm...it's chilly!!\n";
        break;
    }
    return 0;
}
//to comple use -std=c++11 after typing g++ filename. eg. g++ star.cpp -std=c++11