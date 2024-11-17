#include <stdio.h>

int main()
{
  int a = 5, b = 6;

  int *x = &a, *y = &b;

  printf("a = %d, b = %d\n", a, b);

  int temp = *x;

  *x = *y;

  *y = temp;

  printf("a = %d, b = %d\n", a, b);

  return 0;
}