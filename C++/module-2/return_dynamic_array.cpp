#include<bits/stdc++.h>

using namespace std;

// static array

// int* fun(){
//   int a[5];
  
//   for(int i = 0; i < 5; i++){
//     cin >> a[i];
//   }
  
//   return a;
  
// }



// int main (){
  
//  int* x = fun();
  
//   // for(int i = 0; i < 5; i++){
//   //   cout << x[i] << " ";
//   // }
//   return 0;

// }

// The above code will give an error because the array a is a local variable and it will be destroyed after the function fun() is executed. So, the pointer x will point to a memory location that is already destroyed. To avoid this error, we can use dynamic memory allocation to create an array. The following code snippet shows how to return a dynamic array from a function:

//dynamic array

int* fun(){
  int *a = new int[5];
  
  for(int i = 0; i < 5; i++){
    cin >> a[i];
  }
  
  return a;
  
}



int main (){
  
 int* x = fun();
  
  for(int i = 0; i < 5; i++){
    cout << x[i] << " ";
  }
  return 0;

}
