#include<stdio.h>

int main () {
  
  /* 
  1
  1 2
  1 2 3
  1 2 3 4
  */
  
  
  
  // for ( int i = 1; i <= 5; i++ ){
  //   // printf(" %d\n", i);
    
    
  //   for( int j = 1; j <= i; j++) {
  //     printf("%d ", j);
  //   }
  //   printf("\n");      
    
  // }
  
  
  
  
  
  /* 
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

  
  */
    
  // for ( int i = 1; i <= 5; i++ ){
  //   // printf(" %d\n", i);
    
    
    
  //   for( int j = i; j >= 1; j--) {
  //     printf("%d ", j);
  //   }
  //   printf("\n");      
    
  // }
  
  
  
  
  
  /*
  
      1
     1 2
    1 2 3  
  
  
  */
  
  
  
  
  // int n = 7;
      
  // for ( int i = 1; i <= 5; i++ ){
  //   // printf(" %d\n", i);
    
  //   for( int j = 1; j <= n - i; j++){
  //     printf(" ");
  //   }
    
  //   for( int j = i; j >= 1; j--) {
  //     printf("%d ", j);
  //   }
  //   printf("\n");      
    
  // }
  
  
  
  int n = 7;
      
  for ( int i = 1; i <= 5; i++ ){
    // printf(" %d\n", i);
    
    for( int j = 1; j <= n - i; j++){
      printf(" ");
    }
    
    for( int j = i; j >= 1; j--) {
      printf("%d", j);
    }
    printf("\n");      
    
  }
  
  
  
  return 0;
  
}