#include <iostream>
using namespace std;

int main(){
     
    double pi;
    int radius;
     

    cout << " Value of pi is ";
    cin >> pi;
    cout << " what is radius ";
    cin >> radius;



    int A = radius * radius;
    float  Area = A * pi;

    cout << " The are of circle is " << Area << "\n";

    return 0;
}

