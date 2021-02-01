#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nom[40];
  char prenom[40];
  int age;
} personne;


int main()
{
  personne p;
  printf("Donner le nom de la personne: ");
  scanf("%s", p.nom);
  printf("Donner le prenom de la personne: ");
  scanf("%s", p.prenom);
  printf("Donner l\'age de la personne: ");
  scanf("%d", &p.age);
  printf("La personne s\'appelle %s, son de famille est %s. Elle a %d ans.", p.prenom, p.nom, p.age);

  return 0;
}
