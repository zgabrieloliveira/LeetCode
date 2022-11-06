#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{

    int t, i=0, t2=0; // variáveis p/ leitura e operações em laços
    char sheldon[10], raj[10]; // vetores p/ strings de entrada

    scanf("%d", &t);

    do // laço p/  realizar a comparação de strings baseado em um número t de casos 
    {

        t2++;
        scanf("%s %s", sheldon, raj);

        if (!strcmp(sheldon, raj)) // Empate, quando os dois jogarem igual
            printf("Caso #%d: De novo!\n", t2);

        else if (!strcmp(sheldon, "Spock") && !strcmp(raj, "pedra")) // Spock vaporiza Pedra, Sheldon vence
            printf("Caso #%d: Bazinga!\n", t2);

        else if (!strcmp(sheldon, "lagarto") && !strcmp(raj, "Spock")) // Lagarto envenena Spock, Sheldon vence
            printf("Caso #%d: Bazinga!\n", t2);

        else if (!strcmp(sheldon, "tesoura") && !strcmp(raj, "lagarto")) // Tesoura decapita Lagarto, Sheldon vence
            printf("Caso #%d: Bazinga!\n", t2);

        else if (!strcmp(sheldon, "papel") && !strcmp(raj, "Spock")) // Papel contesta Spock, Sheldon vence
            printf("Caso #%d: Bazinga!\n", t2);

        else if (!strcmp(sheldon, "tesoura") && !strcmp(raj, "papel")) // Tesoura corta Papel, Sheldon vence
            printf("Caso #%d: Bazinga!\n", t2);

        else if (!strcmp(sheldon, "papel") && !strcmp(raj, "pedra")) // Papel embrulha Pedra, Sheldon vence
            printf("Caso #%d: Bazinga!\n", t2);

        else if (!strcmp(sheldon, "lagarto") && !strcmp(raj, "papel")) // Lagarto come Papel, Sheldon vence 
            printf("Caso #%d: Bazinga!\n", t2);

        else if (!strcmp(sheldon, "pedra") && !strcmp(raj, "lagarto")) // Pedra esmaga Lagarto, Sheldon vence
            printf("Caso #%d: Bazinga!\n", t2);

        else if (!strcmp(sheldon, "Spock") && !strcmp(raj, "tesoura")) // Spock destrói Tesoura, Sheldon vence
            printf("Caso #%d: Bazinga!\n", t2);

        else if (!strcmp(sheldon, "pedra") && !strcmp(raj, "tesoura")) // Pedra quebra Tesoura, Sheldon vence
            printf("Caso #%d: Bazinga!\n", t2);


        /* Todos os casos em que Sheldon vence foram declarados,
            então em casos distintos, excluindo empate, Raj vence */
        else
            printf("Caso #%d: Raj trapaceou!\n", t2);

        i++;

    }
    while (i<t);


return 0;


}