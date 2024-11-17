#include<stdio.h>

int main () 
{

printf("before while loop\n");

int i = 0;

while (i <5)
{
   printf("inside while loop\n");
    printf("value of i = %d\n", i);
   i++;
}



i = 1 ;

for(; i < 5; )
{
    printf("inside for loop\n");
    printf("value of i = %d\n", i);
    i++;
}


printf("Outside While Loop\n" );


}