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

  int index, value;

  scanf("%d %d", &index, &value);

  // Insertion in Index

  length++;

  for (int i = length - 1; i >= index; i--)
  {
    a[i + 1] = a[i];
  }

  a[index] = value;

  for (int i = 0; i < length; i++)
  {
    printf("%d ", a[i]);
  }

  return 0;
}

// 0 1 2 3 4
// 5 8 3 7 1