#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char * day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  int d;
  do
  {
    printf("Choose a number between 1 and 7: ");
    scanf("%d", &d);
  } while ((d<1) || (d>7));

printf("Day number %d of the week is %s.\nThe length of the word %s is %zu.", d, day[d-1], day[d-1], strlen(day[d-1]));

return 0;
}
