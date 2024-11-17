#include <stdio.h>
#include <string.h>

int main()
{
  char a[10];

  char b[10] = "abcdef";

  // strcpy(destination, source);

  printf("%s %s\n", a, b);

  strcpy(a, "12345");

  printf("%s %s\n", a, b);

  strcpy(a, b);
  // strcpy(b, a);

  // int length = strlen(b);

  // printf("%s %s\n", a, b);

  // for (int i = 0; i < length; i++)
  // {
  //   a[i] = b[i];
  // }

  // a[length] = '\0';

  printf("%s %s", a, b);

  return 0;
}