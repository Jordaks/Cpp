#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power (double base, int exponent)
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
    
}

int main ()
{
    int base, exponent;
    cout << "what is the base?: ";
    cin >> base;
    cout << "what is the exponent?: ";
    cin >> exponent;
    double myPower = power(base, exponent);
    cout << myPower << std::endl;

}
