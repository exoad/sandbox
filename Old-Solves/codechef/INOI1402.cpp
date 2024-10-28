#include <stdio.h>

int main()
{
  int i, j, k, v, e, x, y, l;
  scanf("%d%d", &v, &e);
  int xf[v][v];
  for (i = 0; i < v; i++)
  {
    for (j = 0; j < v; j++)
    {
      if (i == j)
        xf[i][j] = 0;
      else
        xf[i][j] = -1;
    }
  }
  for (i = 0; i < e; i++)
  {
    scanf("%d%d%d", &x, &y, &l);
    xf[x - 1][y - 1] = l;
    xf[y - 1][x - 1] = l;
  }
  for (k = 0; k < v; k++)
    for (i = 0; i < v; i++)
      for (j = 0; j < v; j++)
        if (i != j && (xf[i][j] > xf[i][k] + xf[k][j] || xf[i][j] == -1) && xf[i][k] > -1 && xf[k][j] > -1)
          xf[i][j] = xf[i][k] + xf[k][j];
}
long long int max = 0;
for (i = 0; i < v; i++)
  for (j = i + 1; j < v; j++)
    if (xf[i][j] > max)
      max = xf[i][j];
printf("%lld\n", max);
return 0;
}
