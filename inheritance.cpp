//we get to see how inheritance works in c++
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
private:            //there 3 types of access modifiers public,private and protected
    string Company; //Encapsulation: making the data in this class private and not accessible to other classes directly
    int Age;

protected: //protected allows child classes to have access to attributes of parent class directly without the use of getters
    string Name;

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
class Developer : public Employee
//class developer is inheriting from class employee. also employee is made public since every class is private by default
//making it public allows child class to have access to methods inside of parent class .
{
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage)
        : Employee(name, company, age) //Base class being inherited from
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug()
    {
        cout << Name << " is fixing bugs using " << FavProgrammingLanguage << std::endl;
    }
};
class Teacher : public Employee
{
public:
    string Subject;

    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        Subject = subject;
    }
    void PrepareLesson()
    {
        cout << Name << " is preparing " << Subject << " lesson" << std::endl;
    }
};

int main()
{
    Developer d = Developer("Gifty", "Baked Goods", 27, "C++");
    d.FixBug();
    d.AskForPromotion();
    Teacher t = Teacher("Peter", "Cool school", 33, "Biology");
    t.PrepareLesson();
    t.AskForPromotion();
}
