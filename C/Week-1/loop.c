#include<stdio.h>

int main ()
{
printf("before for loop\n");

for(int i = 3; i >=1; i--)
{
    printf("inside for loop\n");
    printf("value of i = %d\n", i);
}

printf("Outside For Loop\n" );

}