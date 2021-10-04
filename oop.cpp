
//OOP Using default constructor
#include <iostream>

using std::cout;
using std::string;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() //shows behaviour of object employee1
    {
        cout << "Name: " << Name << std::endl;
        cout << "Company: " << Company << std::endl;
        cout << "Age: " << Age << std::endl;
    }
};

int main()
{
    Employee employee1;

    employee1.Name = "Gifty";
    employee1.Company = "Cakey";
    employee1.Age = 27;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Paul";
    employee2.Company = "baked";
    employee2.Age = 29;
    employee2.IntroduceYourself();
}