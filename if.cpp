#include <iostream>
using std::cout;
using std::cin;

int main(){
   int GWA;
    
    cout << "WHAT IS YOUR GRADE?: ";
    cin >> GWA;
    if ( GWA > 89)
    {
        cout << " CONGRATS YOU ARE DEAN'S LISTER! ";
    }
    else if( GWA < 74 )
    {
        cout << " YOU'RE FAILED! ";
    }
    else 
    {
        cout << " OH NICE GOOD WORK! ";
    }
    

     return 0;
}