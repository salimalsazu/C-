#include<stdio.h>

int main ()
{
int a = 5 ;

scanf("%d", &a);


if(a < 5)
{
    printf("a is 5\n");
}
else if(a < 10)
{
    printf("a is greater than 10\n");
}
else if (a < 15)
{
    printf("a is less than 15\n");
}
else if (a < 20)
{
    printf("a is greater than 20\n");
}
else
{
    printf("a is 100\n");
}


return 0 ;
}