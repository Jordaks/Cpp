#include <iostream>
using std::cout;
#define X 10 


int main()
{
    const int x = 5;

    enum { y = 100 }

    cout << x;
    
}

/*#include <iostream>
using namespace std;

const int myConstant = 10; // Global constant

int main() {
    const int myConstant = 5; // Local constant in main function

    cout << "Local constant in main function: " << myConstant << endl; // Outputs the local constant
    cout << "Global constant: " << ::myConstant << endl; // Outputs the global constant using the scope resolution operator (::)

    return 0;
}
*/