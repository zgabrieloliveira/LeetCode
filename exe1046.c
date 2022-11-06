#include <stdio.h>

int main () {

//ENTRADA 

    int inicio, final;
    int duracao;

    scanf("%d %d", &inicio, &final);


//SAIDA 

    if (inicio < final) {
        duracao = final - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
        
    } else {
        duracao = (24 - inicio) + final;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    
return 0;
