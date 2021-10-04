//we get introduced to abstraction

#include <iostream>
using std::cout;
using std::string;

class AbstractEmployee //Abstract class
{
    virtual void AskForPromotion() = 0; //Pure virtual function or abstract function
                                        //Any class that decides to use this function or method will have to provide implementation for it
};

class Employee : AbstractEmployee //class Employee has taken on this function and thus it will provide its implementation
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
    void AskForPromotion() //implementation of function or method AskForPromotion
    {
        if (Age > 30)
            cout << Name << " is eligible for a PROMOTION!!!" << std::endl;
        else
            cout << Name << " sorry you are not yet eligible for a promotion" << std::endl;
    }
};

int main()
{
    Employee employee1 = Employee("Gifty", "Baked", 27);
    Employee employee2 = Employee("Peter", "Yango", 31);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}