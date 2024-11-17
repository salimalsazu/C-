#include <stdio.h>
#include <string.h>

int main()
{
  char str[10] = "abcde";

  strrev(str);

  // char str2[10];

  // strcpy(str2, str);

  // int length = strlen(str);

  // for (int i = 0, j = length - 1; i <= j; i++, j--)
  // {
  //   char temp = str[i];
  //   str[i] = str[j];
  //   str[j] = temp;
  // }

  printf("%s", str);
}