#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char * termP[6] = {"e","es","e","ons", "ez", "ent"};
  char * termD[6] = {"is", "is", "it", "issons", "issez", "issent"};
  char * pronom[6] = {"Je", "Tu", "Elle/Il/On", "Nous", "Vous", "Elles/Ils"};
  char verb[50], verbe[50];
  int i;

  printf("Donner un verb du premier groupe: ");
  scanf("%s", verb);
  memset(verbe, '\0', sizeof(verbe));
  strncpy(verbe, verb,(strlen(verb)-2));
  printf("verbe = %s\n", verbe);


  for (i=0; i<6; i++)
  {
    printf("%s %s\n", pronom[i], strcat(verbe,termP[i]));
    memset(verbe, '\0', sizeof(verbe));
    strncpy(verbe, verb,(strlen(verb)-2));
  }
  printf("Donner un verb du deuxi\ème groupe: ");
  scanf("%s", verb);
  memset(verbe, '\0', sizeof(verbe));
  strncpy(verbe, verb,(strlen(verb)-2));
  printf("verbe = %s\n", verbe);


  for (i=0; i<6; i++)
  {
    printf("%s %s\n", pronom[i], strcat(verbe,termD[i]));
    memset(verbe, '\0', sizeof(verbe));
    strncpy(verbe, verb,(strlen(verb)-2));
  }
return 0;

}
