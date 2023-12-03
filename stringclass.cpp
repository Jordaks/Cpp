#include <iostream>
#include <string>


int main()
{
    std::string greeting = "Helloooooooo";
    std::string complete_greeting = greeting + " there";
    complete_greeting +="!";
    std::cout << complete_greeting << std::endl;
    std::cout << complete_greeting.length() << std::endl;
    







    std::string greeting;
    std::cin >> greeting;
    std::string left_over;
    std::cin >> left_over;
    std::cout << greeting << std::endl;
    std::cout << left_over << std::endl;
}