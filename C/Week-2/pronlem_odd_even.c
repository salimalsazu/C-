#include<stdio.h>


int main (  ) {
  
  int n;
  
  int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;
  
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    
    if(x % 2 == 0){
      //even
      evenCount++;
      // printf("Even\n");
    }else{
      //odd
      oddCount++;
      // printf("Odd\n");
    }
    
    if(x > 0){
      //positive
      positiveCount++;
      // printf("Positive\n");
    }else if (x < 0){
      //negative
      negativeCount++;
      // printf("Negative\n");
    }
    
  }

  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", evenCount, oddCount, positiveCount, negativeCount);
  
}




/* 
Even 3
Odd 2
Positive 1
Negative 3



*/