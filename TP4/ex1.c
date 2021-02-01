#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main()
{
  int i, j, ok;
  char sentence[100];
  double length;

  printf("Write your sentence: ");
  //fgets(sentence, sizeof(sentence), stdin);
  scanf("%s", sentence);
  length = strlen(sentence);

  ok = 1;
  for(i = 0,j = length-1;i < j;i++,j--)
  {
     if(sentence[i] != sentence[j])
     {
       ok = 0;
       break;
     }
  }
  if(ok == 1) printf("%s is a palindrome.\n", sentence);
  else printf("%s is not palindrome.\n", sentence);

  return 0;
}
