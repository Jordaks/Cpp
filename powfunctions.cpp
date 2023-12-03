#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

    int main ()
    {
        int base, exponent;
        cout << "what is the base?: ";
        cin >> base;
        cout << "what is the exponent?: ";
        cin >> exponent;
        double power = pow(  base, exponent);
        cout << power << std::endl;




    }