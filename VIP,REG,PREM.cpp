#include <iostream>
#include <string>
using namespace std;

int main(){
    string Quality;
    int Age;
    int VIP = 5000;
    int REGULAR = 1000;
    int PREMIUM = 3000;
    int Minor = 250;
    int TeenAger = 500;
    int Adult = 750;


    cout << "VIP, PREMIUM, REGULAR ?\n";
    cin >> Quality;
    cin >> Age;
   

    if(Quality == "VIP" || Quality == "Vip" || Quality == "vip"){
        if(Age <= 17){
            cout << "Your bill is " << VIP + Minor << endl;
        }else if(Age >= 18 && Age <= 30){
            cout << "Your bill is " << VIP + TeenAger << endl;
        }else{
            cout << "Your bill is " << VIP + Adult << endl;
        }
    }else if(Quality == "PREMIUM" || Quality == "Premium" || Quality == "premium"){
        if(Age <= 17){
            cout << "Your bill is " << PREMIUM + Minor << endl;
        }else if(Age >= 18 && Age <= 30){
            cout << "Your bill is " << PREMIUM + TeenAger << endl;
        }else{
            cout << "Your bill is " << PREMIUM + Adult << endl;
        }
    }else{
        if(Age <= 17){
            cout << "Your bill is " << REGULAR + Minor << endl;
        }else if(Age >= 18 && Age <= 30){
            cout << "Your bill is " << REGULAR + TeenAger << endl;
        }else{
            cout << "Your bill is " << REGULAR + Adult << endl;
        }
    }
    return 0;
}

    