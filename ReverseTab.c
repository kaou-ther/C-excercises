#include <math.h>
#include <stdio.h>
#define N 10

int main()
{
  int t[N], Tab[N], i;

for(i=0; i<N; i++)
{
  printf("Enter an integer Tab[%d] = ", i+1);
  scanf("%d", &Tab[i]);
  t[i] = Tab[i];
}

for (i=0; i<N; i++)
{
  Tab[i] = t[N-1-i];
  printf("Reversed Tab[%d] = %d\n", i+1, Tab[i]);
}

  return 0;
}
