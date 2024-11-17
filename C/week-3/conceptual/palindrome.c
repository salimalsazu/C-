#include <stdio.h>

int main()
{

  int n;
  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  int l = 0, r = n - 1;

  int pal = 1;

  while (l <= r)
  {
    // swapping

    if (a[l] != a[r])
    {
      pal = 0;
      break;
    }

    l++; // L k samner dikey niye gesi
    r--; // R k pichoner dike niye gesi
  }

  if (pal == 1)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }

  return 0;
}