#include<bits/stdc++.h>

using namespace std;

// static array

// int main (){
//   int a[3];
  
//   for(int i = 0; i < 3; i++){
//     cin >> a[i];
//   }
  
//   int b[5];
  
//   for(int i = 0; i < 3; i++){
//     b[i] = a[i];
//   }
  
//   b[3] = 10;
//   b[4] = 20;
  
//   for(int i = 0; i < 5; i++){
//     cout << b[i] << " ";
//   }
  
  
//   return 0;
  
// }

// The above code will give an error because the size of the array b is fixed at 5. To avoid this error, we can use dynamic memory allocation to create an array. The following code snippet shows how to create a dynamic array and copy the elements of a static array to the dynamic array:

//Dynamic array

int main (){
  int *a = new int[3];
  
  for(int i = 0; i < 3; i++){
    cin >> a[i];
  }
  
  int *b = new int[5];
  
  for(int i = 0; i < 3; i++){
    b[i] = a[i];
  }
  
  b[3] = 10;
  b[4] = 20;
  
  //deleting the dynamic array so [] is used
  delete [] a;
  
  for(int i = 0; i < 5; i++){
    cout << b[i] << " ";
  }
  
  
  return 0;
  
}