#include <stdio.h>
int a[100000];
int b[100000];

int main()
{

  int length;

  scanf("%d", &length);

  for (int i = 0; i < length; i++)
  {
    scanf("%d", &a[i]);
  }

  for (int i = 0, j = length - 1; i < length; i++, j--)
  {

    b[j] = a[i];
  }

  for (int i = 0; i < length; i++)
  {
    a[i] = b[i];
  }

  for (int i = 0; i < length; i++)
  {
    printf("%d ", a[i]);
  }

  printf("\n");

  // for (int i = 0; i < length; i++)
  // {
  //   printf("%d ", b[i]);
  // }

  return 0;
}

// 0 1 2 3 4
// 5 7 9 2 1