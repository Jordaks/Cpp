#include <iostream>
#include <string>
using namespace std;

int main(){

    int perDay = 1680;
    int rent = 7;
    double discount = 0.10;
    int luxuryCar = 2800;
    string car;
    /*string CAR = "LUXURY";
    string caR = "luxury";
    string cAr = "Luxury";
    string Car = "Sedan";
    string CAr = "sedan";
    string CaR = "SEDAN";*/

    int rentBill = luxuryCar * rent;
    double total = rentBill * discount;
    int Total = rentBill - total;

    int Rentbill = perDay * rent;
    double toTal = Rentbill * discount;
    int totaL = Rentbill - toTal;

    cout << "\n\t Calculate Rental Cost \n\n";
    cout << "What is your want car?\n";
    cout << "Sedan or Luxury?\n";
    cin >> car;
                //cAr               //caR               //CAR
    if ( car == "Luxury" || car == "luxury" || car == "LUXURY"){
        cout << "Your bill for rent car(Luxury) is " << Total << "\n";
                        //Car            //CAr              //CaR
    }else if ( car == "Sedan" || car == "sedan" || car == "SEDAN"){
        cout << "Your bill for rent car(Sedan) is " << totaL << "\n";
    }else{
        cout << "Invalid Car!!!\n";
    }
    

    return 0;
}