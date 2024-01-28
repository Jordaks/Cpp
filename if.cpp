#include <iostream>
using std::cout;
using std::cin;

int main(){
   int GWA = 90;
    
    cout << "WHAT IS YOUR GRADE?: \n";
    cin >> GWA;
    if ( GWA > 89)
    {
        cout << "CONGRATS YOU ARE DEAN'S LISTER! ";
    }

    else 
    {
        cout << "OH NICE GOOD WORK! ";
    }
    

     return 0;
}