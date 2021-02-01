#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

  char sentence[100];
  char choice;
  int i;
  double length;

  printf("write your sentence: ");
  fgets(sentence, sizeof(sentence), stdin);
  //scanf("%s", sentence);
  length = strlen(sentence);

  printf("Do you want to upper case or lower case your sentence?\nAnswer 1 for upper and 2 for lower: \n");
  scanf("%c", &choice);
  printf("choice: %c\n", choice);

 switch (choice)
  {
    case 'u':
        for(i=0; i<length; i++)
        {
          sentence[i] = toupper(sentence[i]);
        }
        puts(sentence);
        break;
    case 'l':
        for(i=0; i<length; i++)
        {
          sentence[i] = tolower(sentence[i]);
        }
        puts(sentence);
        break;


    default: printf("invalid answer"); break;
  }
/*  scanf("%d", &choice);
  printf("choice: %d\n", choice);

 switch (choice)
  {
    case 1:
        for(i=0; i<length; i++)
        {
          sentence[i] = toupper(sentence[i]);
        }
        puts(sentence);
        break;
    case 2:
        for(i=0; i<length; i++)
        {
          sentence[i] = tolower(sentence[i]);
        }
        puts(sentence);
        break;


    default: printf("invalid answer"); break;
  }*/

  return 0;
}
