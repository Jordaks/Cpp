#include <iostream>
using namespace std;

int main(){

        cout << "\t BASIC CALCULATOR \n\n";

        int num1, num2;
        char sign;
        //cout << "\t Enter a number: ";
        cin >> num1;
        //cout << "\t Type Operator: ";
        cin >> sign;
        //cout << "\t Enter a number: ";
        cin >> num2;
          

        int AddAnswer = num1 + num2;
        int SubAnswer = num1 - num2;
        int MulAnswer = num1 * num2;
        int DivAnswer = num1 / num2;
        int ModAnswer = num1 % num2;
      

        switch(sign)
        {
        
            case '+':
                cout << "\t Answer is " << AddAnswer;
                break;

            case '-':
                cout << "\t Answer is " << SubAnswer;
                break;

            case '*':
                cout << "\t Answer is " << MulAnswer;
                break;

            case '/':
                cout << "\t Answer is " << DivAnswer;
                break;

            case '%':
                cout << "\t Answer is " << ModAnswer;
                break;

            default:
                cout << " \tInvalid Operator!!! ";
                break;

      }

    return 0;
}