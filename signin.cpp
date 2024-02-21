#include <iostream>
using namespace std;

int main(){

    string mail;
    string pass;
    int nuM;
    

    cout << "\n   CREATE ACCOUNT\n\n";
    
    cout << "   Sign up\n ";
    
    cout << "   Log In\n\n ";
    
    cout << "   Type 1 to Log in\n ";
    
    cout << "   Type 0 to Sign up\n\n "; 
    cin >> nuM;

    if (nuM <= 0 ){
        cout << "Sign up\n\n";
        cout << "Email:\n ";
        cin >> mail;
        cout << "Password: \n";
        cin >> pass;
    }
        else if(nuM >= 1){
            cout << "Log In\n\n";
            cout << "Email:\n ";
            cin >> mail;
            cout << "Password:\n ";
            cin >> pass;
        }

    
    return 0;
}