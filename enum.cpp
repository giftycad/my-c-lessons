//enum can be used as a constant. using enum in a switchcase
#include <iostream>
#include <string>

int main()
{
    enum season
    {
        summer,
        spring,
        fall,
        winter
    };
    season now = winter;

    switch (now)
    {
    case summer:
        break;

    case spring:
        break;

    case fall:
        break;

    case winter:
        std::cout << "Hey keep warm...it's chilly!!\n";
        break;
    }
    return 0;
}