#include<stdio.h>

int main () {
  int n;
  
  scanf("%d", &n);

for( int j = 1; j <= n; j++){
    for ( int i = 1; i <= 10; i++){
    
    printf("%d x %02d = %02d\n", j, i, j*i);
    
  }
  
  printf("\n");
}
  
   
}