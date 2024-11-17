#include<stdio.h>

int main ()
{
  
  char ch;
  scanf("%c",&ch);
  
  if(ch >= '0' && ch <='9'){
    printf("IS DIGIT\n");
  }
  else {
    printf("ALPHA\n");
    
    if(ch >= 'A' && ch <= 'Z'){
      printf("IS CAPITAL\n");
    } else {
      printf("IS SMALL\n");
    }
    
  }
  
 
  return 0 ;
}

// Digit or Alphabet

//For alphabet - IS CAPITAL or IS SMALL

//Ascii "0" =48, "1" =49, "2"= 50 ..... "9" =57

//Ascii "A" =65, "B" =66, "C"= 67 ..... "Z" =90
//Ascii "a" =97, "b" =98, "c"= 99 ..... "z" =122