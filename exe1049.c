#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{

    char primeiro[30], segundo[30], terceiro[30];

    scanf("%s %s %s", primeiro, segundo, terceiro);

// VERTEBRADOS E AVES 

    if (!strcmp(primeiro, "vertebrado") && !strcmp(segundo, "ave") && !strcmp(terceiro, "carnivoro"))
        printf("aguia\n");

    if (!strcmp(primeiro, "vertebrado") && !strcmp(segundo, "ave") && !strcmp(terceiro, "onivoro"))
        printf("pomba\n");

// VERTEBRADOS E MAMÍFEROS 

    if (!strcmp(primeiro, "vertebrado") && !strcmp(segundo, "mamifero") && !strcmp(terceiro, "onivoro"))
        printf("homem\n");

    if (!strcmp(primeiro, "vertebrado") && !strcmp(segundo, "mamifero") && !strcmp(terceiro, "herbivoro"))
        printf("vaca\n");

// INVERTEBRADOS E INSETOS 

    if (!strcmp(primeiro, "invertebrado") && !strcmp(segundo, "inseto") && !strcmp(terceiro, "hematofago"))
        printf("pulga\n");

    if (!strcmp(primeiro, "invertebrado") && !strcmp(segundo, "inseto") && !strcmp(terceiro, "herbivoro"))
        printf("lagarta\n");

// INVERTEBRADOS E ANELÍDEOS

    if (!strcmp(primeiro, "invertebrado") && !strcmp(segundo, "anelideo") && !strcmp(terceiro, "hematofago"))
        printf("sanguessuga\n");

    if (!strcmp(primeiro, "invertebrado") && !strcmp(segundo, "anelideo") && !strcmp(terceiro, "onivoro"))
        printf("minhoca\n");



return 0;


}