#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  int arr[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
  }

  int sum = 0;
  for (int i = 0; i < N; i++)
  {
    if (arr[i] > 0)
    {
      sum += arr[i];
    }
  }

  printf("%d", sum);

  return 0;
}