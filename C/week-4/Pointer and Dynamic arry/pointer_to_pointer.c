#include <stdio.h>

int main()
{

  int a = 5;

  int *x = &a;

  int **y = &x; // pointer to pointer

  printf("%d %d", y, &x);  // address of x and y
  printf("%d %d", *y, &a); // address of a and x
  printf("%d %d", **y, a); // value of a and x

  return 0;
}