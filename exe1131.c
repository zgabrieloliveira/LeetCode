#include <stdio.h>
#include <stdlib.h>

int main() {

// ENTRADA

    int gols_inter, gols_gremio, resposta;
    int grenais=0, inter=0, gremio=0,empate=0;

// MANIPULAÇÃO DE DADOS COM LAÇO DE REPETIÇÃO

    while (1) {
        scanf ("%d %d", &gols_inter, &gols_gremio);

        if(gols_inter > gols_gremio){
            inter++;
        }
        if(gols_inter < gols_gremio){
            gremio++;
        }
        if(gols_inter == gols_gremio){
            empate++;
        }
        grenais++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf ("%d", &resposta);

        if (resposta == 2){
            break;
        }
    }

// SAÍDA 

            printf("%d grenais\n", grenais);
            printf("Inter:%d\n", inter);
            printf("Gremio:%d\n", gremio);
            printf("Empates:%d\n", empate);

            if (inter > gremio){
                printf("Inter venceu mais\n");
            }

            else if (inter < gremio) {
                printf("Gremio venceu mais\n");
            }
            else {
                printf("Nao houve vencedor\n");
            }

return 0;

}

