#include<stdio.h>
#include<stdbool.h>

int main ()
{
    int tourDays = 2;

    scanf("%d", &tourDays);
        


    if(tourDays == 2)
     {
       
       bool isBootAvailable = true;

        if(isBootAvailable) {
            printf("Going to Tanguar Haur\n");
        } else {
            printf("Going to Sajek\n");
        }
    } 

    else if (tourDays == 4)
    {
        bool isBootAvailable = true;

        if(isBootAvailable) {
            printf("Going to Saint Martin\n");
        } else {
            printf("Going to Cox's Bazar\n");
        }
    }

    else if (tourDays == 7)
    {
        bool isBootAvailable = true;

        if(isBootAvailable) {
            printf("Going to Kuakata\n");
        } else {
            printf("Going to Sundarban\n");
        }
    }

    else
    {
        printf("Stay at home\n");
    }
}