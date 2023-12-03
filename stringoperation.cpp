#include <iostream>
#include <string>

int main()
{

    std::string greeting = "Mark is so handsome ";
    greeting.replace(0 , 4 ," Jordan");
    std::cout << greeting << std::endl;


    std::string greeting = "what is up?";
    std::cout << greeting.substr(5 , 2) << std::endl;

    std::string greeting = "what is up?";
    std::cout << greeting.find_first_of("!") << std::endl;

    if(greeting.find_first_of("!") == -1) std::cout << "NOT FOUND!" << std::endl;

    std::string greeting = "what is up?";
    if(greeting == "what is up?") std::cout << " EQUALS " << std::endl;

    std::string greeting = "what is up?";
    if(greeting.compare("what is up?") == 0) std::cout << " EQUALS " << std::endl;



}