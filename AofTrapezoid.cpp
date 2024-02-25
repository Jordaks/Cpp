#include <iostream>

using namespace std;

int main(){

    int base1, base2, height;
    

    cout << "1st Base is: \n";
    cin >> base1;
    cout << "2nd Base is: \n";
    cin >> base2;
    cout << "Height is: \n";
    cin >> height;


    int two = 2;
    int solution = base1 + base2;
    int solution1 = solution / two;
    int Area = solution1 * height;
    
    cout << solution << "\n";
    cout << solution1 << "\n";
    cout << "The area of Trapezoid is " << Area << "\n";

    return 0;
}