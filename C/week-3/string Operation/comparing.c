#include <stdio.h>
#include <string.h>

int main()
{

  char a[100] = "air";

  char b[100] = "bird";

  int cmp = strcmp(a, b);

  printf("%d", cmp);

  return 0;
}