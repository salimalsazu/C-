#include<stdio.h>


int main()
{
  
  int marks;
  
  scanf("%d",&marks);
  
  if(marks >= 33 && marks <=100){
    printf("You have passed\n");
      if(marks >=80 && marks <=100){
      printf("You have got A+ grade\n");
      if(marks >=90){
        printf("Congratulations you have got scholarship\n");
      }
  }
   if(marks >=70 && marks <=79){
    printf("You have got A grade\n");
  }
   if(marks >=60 && marks <=69){
    printf("You have got A- grade\n");
  }
   if (marks >=50 && marks <=59){
    printf("You have got B grade\n");
  }
   if(marks >=40 && marks <=49){
    printf("You have got C grade\n");
  }
   if (marks >=33 && marks <=39){
    printf("You have got D grade\n");
  }
  }
  else if (marks >=0 || marks <=32){
      printf("You have got F grade\n");
    printf("You have failed\n");
  }
    else{
    printf("Invalid marks\n");
  }
  
  
  return 0;
}