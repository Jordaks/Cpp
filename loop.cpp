#include <iostream>
#include <string>
using namespace std;

int main(){
    string brand[4] = {"Honda", "Toyota", "Porsche", "Nissan"};
    cout << brand[0] << "\n";
    for ( int i = 0; i < 4; i++)
    {
        cout << brand[i] << "  " << i << "\n";
    }
   return 0; 
}