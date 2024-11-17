#include <stdio.h>

int main()
{

  char str[200];

  // scanf("%[^\n]s", str);

  // puts(str); // kind of Depricated

  fgets(str, sizeof(str), stdin);

  fputs(str, stdout);

  printf("%s", str);

  return 0;
}