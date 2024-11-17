#include <stdio.h>
int a[100000];

int main()
{

  int length = 0;

  scanf("%d", &length);

  for (int i = 0; i < length; i++)
  {
    scanf("%d", &a[i]);
  }

  int index;
  scanf("%d", &index);

  if (index < 0 || index >= length)
  {
    printf("Wrong Index\n");
    return 0;
  }

  // Deletion in Index

  for (int i = index; i < length - 1; i++)
  {
    a[i] = a[i + 1];
  }

  length--;

  printf("After Deletion\n");

  for (int i = 0; i < length; i++)
  {
    printf("%d ", a[i]);
  }

  return 0;
}

// 0 1 2 3 4
// 5 7 9 2 1