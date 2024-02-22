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

const int x = 5; // Global constant

int main() {
    const int x = 10; // Local constant in main function

    cout << "Local constant in main function: " << x << endl; // Outputs the local constant
    cout << "Global constant: " << ::x << endl; // Outputs the global constant directly

    return 0;
}

*/