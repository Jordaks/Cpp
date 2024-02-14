#include <iostream>
#include <cmath>
using namespace std;
int jump_search(int[], int, int);
int main(){
   int i, n, key, index;
   int arr[12] = {0, 6, 12, 14, 19, 22, 48, 66, 79, 88, 104, 126};
   printf("Array elements are: ");
   for (auto j : arr){
      cout<< j <<" ";
   }
   n = 12;
   key = 66;
    cout<<"\nThe element to be searched: "<< key <<endl;
   index = jump_search(arr, n, key);
   if(index >= 0)
      cout << "The element is found at position " << index+1;
   else
      cout << "Unsuccessful Search";
   return 0;
}
int jump_search(int arr[], int n, int key){
   int i, j, m, k;
   i = 0;
   m = sqrt(n);
   k = m;
   while(arr[m] <= key && m < n) {
      i = m;
      m += k;
      if(m > n - 1)
         return -1;
   }

   // linear search on the block
   for(j = i; j<m; j++) {
      if(arr[j] == key)
         return j;
   }
   return -1;
}