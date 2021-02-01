#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main()
{
  int i, j;
  char s[132];

  printf("Write your sentence: ");
  fgets(s, sizeof(s), stdin);


  for(i=0;s[i]!='\0';i++)
   {
       if(s[i]=='i')
       {
           for(j=i;s[j]!='\0';j++)
           s[j]=s[j+1];
           i--;
       }
   }
  puts(s);

  return 0;
}
