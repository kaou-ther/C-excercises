#include <math.h>
#include <stdio.h>
#define N 15

int main()
{
  int i, t[N], min, max;

for (i=0; i<N; i++)
{
  printf("t[%d] = ", i);
  scanf("%d", &t[i]);
}
min = t[0];
max = t[0];

for (i=0; i<N; i++)
{
  min = min < t[i] ? min : t[i];
  max = max > t[i] ? max : t[i];
}
printf("Min = %d\nMax = %d", min, max);

return 0;
}
