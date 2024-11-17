#include<stdio.h>

int main()
{

int price = 40 ;

if(price <= 50){
    printf("Buy 4 Egg\n");
    printf("Taka %d taka back", 50 - price);
}
else 
{
    printf("Buy 2 Egg");
}

    return 0;

}