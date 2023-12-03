#include <iostream>
#include <float.h>

using std::cout;

int main()
{
    double a = 197767.5 + 11.5;
    a = a + 100000000;
    long b = 25 - 776;
    b = b + 122334455;
    long double c = 644 + 389;
    c = c - 34658390l;

    cout << std::fixed << a << '\n'; 
    cout << std::fixed << b << '\n';
    cout << std::fixed << c << '\n';
    cout << LDBL_DIG << std::endl;
}