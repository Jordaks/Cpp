#include <iostream>
#include <cmath>   // Include cmath for the sqrt function
using namespace std;

int jump_search(int[], int, int);    // Function prototype for jump_search

int main() {
   int i, n, key, index;
   int arr[12] = {0, 6, 12, 14, 19, 22, 48, 66, 79, 88, 104, 126};
   cout << "Array elements are: ";
   for (auto j : arr) {
      cout << j << " ";
   }
   n = 12;   // Number of elements in the array
   key = 66;    // Element to be searched
   cout << "\nThe element to be searched: " << key << endl;
   index = jump_search(arr, n, key);    // Perform jump search
   if (index >= 0)
      cout << "The element is found at position " << index + 1;
   else
      cout << "Unsuccessful Search";
   return 0;
}

// Jump search function
int jump_search(int arr[], int n, int key) {
   int i, j, m, k;
   i = 0;    // Initialize the starting index
   m = sqrt(n);    // Determine the jump size using square root of n
   k = m;    // Store the jump size in k
   while (arr[m] <= key && m < n) {    // Perform jumps until finding a range that may contain the key
      i = m;    // Update the starting index
      m += k;     // Move m to the next block
      if (m > n - 1)
         return -1;     // If m exceeds the array size, return -1
   }

   // Perform linear search within the block
   for (j = i; j < m; j++) {
      if (arr[j] == key)
         return j;     // If key is found, return its index
   }
   return -1;     // If key is not found, return -1
}
