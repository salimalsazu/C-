#include <stdio.h>

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);

  int a[n + 5][m + 5]; // 2D array declaration and  extra 5 rows and columns

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < m; j++)
    {

      scanf("%d", &a[i][j]);
    }
  }

  a[1][2] = 100; // changing the value of a[1][2] to 100

  a[2][3] = 200; // changing the value of a[2][3] to 200

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < m; j++)
    {

      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}