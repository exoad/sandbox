#include <stdio.h>

int s(int n)
{

  return ((n * (n + 3)) / 2);
}
int p(int n)
{
  int min;
  if (n == 1)
    return 2;
  if (n == 0)
    return 0;
  if (n % 2 != 0)
    return (n + 1 + 2 * p(n / 2));
  if (n % 2 == 0)
    return (n + 1 + p(n / 2) + p(n / 2 - 1));
}
int main(void)
{
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++)
  {
    int min, max, n, m;
    scanf("%d %d", &n, &m);
    min = p(n);
    max = s(n);

    if (m <= max && m >= min)
      printf("%d\n", 0);
    else if (m > max)
      printf("%d\n", m - max);
    else if (m < min)
      printf("-1\n");
  }
  return 0;
}
