//OOP creating your own constructor

#include <iostream>
using std::cout;
using std::string;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself()
    {
        cout << "Name: " << Name << std::endl;
        cout << "Company: " << Company << std::endl;
        cout << "Age: " << Age << std::endl;
    }

    Employee(string name, string company, int age) //constructor
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Gifty", "Baked", 27);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Peter", "Yango", 20);
    employee2.IntroduceYourself();
}