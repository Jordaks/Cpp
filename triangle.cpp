#include <iostream>
using namespace std;


int main(){

    for (int i = 0; i < 1; i++){
        cout << "       " << "*" << "\n"<< "    ";
        for (int  j = 0; j < 3; j++){
            cout  << " *";     
        }
        cout << "\n" << "  ";
        for (int k = 0; k < 5; k++){
            cout  << " *";
        }
        cout << "\n";
        for (int l = 0; l < 7; l++){
            cout << " *";
        }
    }
    return 0;
}