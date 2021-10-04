//we are introduced to Encapsulation, setters and getters

#include <iostream>
using std::cout;
using std::string;

class Employee
{
private:
    string Name; //Encapsulation: making the data in this class private and not accessible to other classes directly
    string Company;
    int Age;

public:
    void setName(string name) //setter:used for picking attribute you wish to make public
    {
        Name = name;
    }
    string getName() //getter:used for returning attributes picked from setter
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age) //You can also set conditions according to your preference
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }
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

    employee1.setAge(17); //wouldn't print 17 since it is less than 18. program hides the ages of employees less than age 18
    cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;
}