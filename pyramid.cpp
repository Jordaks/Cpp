#include <iostream>
using namespace std;

int main() 
{
  // Outer loop
  for (int i = 1; i <= 1; ++i)
  {
    cout << "   " << '*' << "\n";  // Executes 2 times
    cout << "  ";
    // Inner loop
    for (int j = 1; j <= 3; ++j) {
      cout  << '*';  // Executes 6 times (2 * 3)
    }
    cout << "\n";
  }
  
      cout << " ";
      
      int k = 0;
          while (k < 5){
              cout << '*';
              k++;
      }
      
      cout << "\n";
  
      int l = 0;
        do {
          cout << '*';
          l++;
        }
        while (l < 7);
        
      
    return 0;
}
    