#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int key, i;
  char sentence[100];
  double length;

  printf("Write your sentence: ");
  fgets(sentence, sizeof(sentence), stdin);
  printf("Give your encryption key: ");
  scanf("%d", &key);
  length = strlen(sentence);
  for (i=0; i<length; i++)
  {
    if(((sentence[i] >= 'a') && (sentence[i]<='z')) || ((sentence[i]>='A') && (sentence[i]>='Z')))
    {
      sentence[i] = sentence[i]+key;
    }
  }
  puts(sentence);

  return 0;
}
