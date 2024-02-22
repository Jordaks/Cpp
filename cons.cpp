#include <iostream>
using namespace std;

int main(){

    const int myNum = 10;
    
    myNum = 6;

    cout << myNum;

    return 0;
}


/* #include <iostream>
using namespace std;

const int myConstant = 10; // Global constant

int main() {
    const int myConstant = 5; // Local constant in main function

    cout << "Local constant in main function: " << myConstant << endl; // Outputs the local constant
    cout << "Global constant: " << ::myConstant << endl; // Outputs the global constant using the scope resolution operator (::)

    return 0;
}

*/