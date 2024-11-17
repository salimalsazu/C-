#include<stdio.h>

// int main ()
// {

// int day = 1 ; 

// if (day == 1)
// {
//     printf("Sunday\n");
// }
// else if (day == 2)
// {
//     printf("Monday\n");
// }
// else if (day == 3)
// {
//     printf("Tuesday\n");
// }
// else if (day == 4)
// {
//     printf("Wednesday\n");
// }
// else if (day == 5)
// {
//     printf("Thursday\n");
// }
// else if (day == 6)
// {
//     printf("Friday\n");
// }
// else if (day == 7)
// {
//     printf("Saturday\n");
// }
// else
// {
//     printf("Invalid Day\n");
// }

//     return 0 ;
// }



int main ()

{
 int day = 5; 
switch (day)
{
case 1:
    printf("Sunday\n");
    break;
case 2:
    printf("Monday\n");
    break;
case 3:
    printf("Tuesday\n");
    break;

case 4:
    printf("Wednesday\n");
    break;

case 5:
    printf("Thursday\n");
    break;

case 6:
    printf("Friday\n");
    break;
case 7:
    printf("Saturday\n");
    break;
default:
    printf("Invalid Day\n");
    break;
}

    return 0 ;
}

