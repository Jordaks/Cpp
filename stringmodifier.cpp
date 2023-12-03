#include  <iostream>
#include  <string>

int main()
{

    std::string greeting = "Mark is so handsome ";
    greeting.pop_back();
    greeting.replace(0 , 4 ," Jordan");
    std::cout << greeting << std::endl;
    
}