
//string methods(modifiers) length,size,append,insert,erase,pop_back,replace
#include <iostream>
#include <string>

int main()
{
    std::string greeting = "boozy";
    greeting.replace(1, 4, "lasty"); //replaces letters strting from index 1-4
    std::cout << greeting << std::endl;

    //greeting.pop_back(); //also removes last letter
    //std::cout << greeting << std::endl;

    //greeting.erase(greeting.length() - 1); //to remove last letter
    //std::cout << greeting << std::endl;

    //greeting.erase(3, 2);//removes zy from boozy as z and y are at index 3 and 4 respectively and they are the las two char's
    //std::cout << greeting << std::endl;

    //greeting.insert(3, "zzz");//adds 3 z's to boozy at index 3
    //std::cout << greeting << std::endl;

    //greeting.append(" friday!");//adds firday to boozy
    // std::cout << greeting << std::endl;

    //std::cout << greeting.length() << std::endl;//.length and .size both counts the number of chars in a string
}