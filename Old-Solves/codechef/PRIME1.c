#include <stdio.h>
#include <math.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    unsigned int low, high, i = 0, j = 2, k, x = 0, y = 0, z;
    unsigned long int a[200000], b[200000];
    scanf("%d", &low);
    scanf("%d", &high);
    for (i = low; i <= high; i++)
      a[x++] = i;
    for (i = 2; i <= 32000; i++)
      b[y++] = i;
    i = 0;
    while (b[i] * b[i] <= high)
    {
      if (b[i] != 0)
      {
        k = i;
        for (; k < y; k += j)
          if (k != i)
            b[k] = 0;
      }
      i += 1;
      j += 1;
    }
    for (i = 0; i < y; i++)
      if (b[i] != 0 && (b[i] >= low && b[i] <= sqrt(high)))
        printf("%d\n", b[i]);
    int c = 0;
    for (i = 0; i < y; i++)
      if (b[i] != 0 && (b[i] >= 1 && b[i] <= sqrt(high)))
        b[c++] = b[i];
    int m = a[0];
    for (i = 0; i < c; i++)
    {
      z = (m / b[i]) * b[i];
      k = z - m;
      if (k != 0)
        k += b[i];
      for (; k < x;)
      {
        if (a[k] != 0)
          a[k] = 0;
        k += b[i];
      }
    }
    for (i = 0; i < x; i++)
      if (a[i] != 0 && (a[i] >= 2 && a[i] <= (high)))
        printf("%d\n", a[i]);
    printf("\n");
  }
  return 0;
}
