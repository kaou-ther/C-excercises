#include <stdio.h>
#define N 5

int tab[N] = {1, 2, 6, 0, 7};

int main()
{
  int *p;
  printf("\nordre croissant:\n");
  for (p = &tab[0]; p <= &tab[N-1]; p++)
  {
    printf("%d\n", *p);
  }
  printf("\nordre décroissant:\n");
  for (p = &tab[N-1]; p >= &tab[0]; p--)
    printf("%d\n", *p);

  return 0;
}
