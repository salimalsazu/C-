#include<stdio.h>
#include<math.h>

int main (){
  
  int a, b, c, d;
    
  scanf("%d %d %d %d", &a, &b, &c, &d);
  
  long long int mult;
  
  mult = a * b * c * d;
  
  printf("%02lld", mult % 100);
  
    
  return 0;  
  
}