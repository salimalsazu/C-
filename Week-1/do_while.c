#include<stdio.h>

int main ()
{
    int i= 10;

    do {
        printf("inside do while loop\n");
        printf("value of i = %d\n", i);
        i++;
    } while (i < 5);
}