#include<stdio.h>

int main() {
  char a[5];
  
  for(int i = 0; i < 5; i++) {
    scanf("%c", &a[i]);
  }
  
 

 
  // printf("%d", a[0]);
  
  // for(int i = 0; i < 5; i++) {
  //   printf("%d ", a[i]);
  // }



  for(int i = 0; i < 5; i++) {
    printf("%d ", &a[i]);
  }
  
}

// 0, 1, 2, 3, 4