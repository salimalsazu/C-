#include<bits/stdc++.h>

using namespace std;

// int main (){
  
//   // Static memory allocation [stack]
//   int x = 10;
  
//   // Dynamic memory allocation [Heap]
//   int *p = new int;
  
//   /*p = 100;
  
//   cout << *p << endl;
  
  
//   return 0; 
// }

int *p;

void fun (){
  int *x = new int;
  
  *x = 10;
  
  p = x ;
  
  cout <<"Fun -> " << *p << endl;
  return;
}


int main (){
  
  fun();
  cout <<"Main -> " << *p << endl;
  return 0;
  
}

