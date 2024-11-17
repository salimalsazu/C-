#include <stdio.h>

int main()

{

  char a[20] = "Hello ";
  char b[20] = "World?";

  strcat(a, b);

  // int len_a = strlen(a);
  // int len_b = strlen(b);

  // int length = len_a + len_b;

  // for (int i = len_b, j = 0; i < length; i++, j++)
  // {

  //   b[i] = a[j];
  // }

  // a[length] = '\0';

  printf("%s\n", a);
  // printf("%s\n", b);

  return 0;
}