#include <stdio.h>
#include <string.h>

int main()
{
  char str[10] = "ab\0cde"; // string charecter bitor null \0 boshanu jabey nah boshaley er ag porjotnoo count korbe

  int length = strlen(str);

  // int length = 0;

  // for (int i = 0; str[i] != '\0'; i++)
  // {
  //   length++;
  // }

  printf("%d", length);

  return 0;
}