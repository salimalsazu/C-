#include <stdio.h>
#include <string.h>

int main()

{

  // char str[10] = "apple";
  char str[10] = "aaaabbbc";

  int f[26] = {0};

  int len = strlen(str);

  for (int i = 0; i < len; i++)
  {

    char ch = str[i];

    int index = ch - 'a';

    f[index] = 1;
  }

  int count = 0;
  for (int i = 0; i < 26; i++)
  {
    count += f[i];

    if (f[i] == 1)
    {
      printf("%c %d\n", i + 'a', f[i]);
    }

    // printf("%c %d\n", i + 'a', f[i]);
  }

  printf("%d\n", count);
  return 0;
}