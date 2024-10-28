#pragma GCC diagnostics ignored ?

#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, k, flag = 0;
    scanf("%d%d", &n, &k);
    int arr[n], s = 0;
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
      s += arr[i];
    }
    int sweets = s / k;
    for (int i = 0; i < n; i++)
    {
      if (sweets == (s - arr[i]) / k)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      printf("%d\n", sweets);
    else
      printf("-1\n");
  }
  return 0;
}
