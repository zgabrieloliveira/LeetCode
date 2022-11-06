#include <stdio.h>
#include <stdlib.h>

int main() {

// ENTRADA E LEITURA DE VARIAVEIS

    int m, n, sequencia, soma;

    while(1) {
        scanf("%d %d", &m, &n);

// M ou N negativos ou iguais a zero

        if(m<=0 || n<=0) {
            break;
        }

        else {
        soma=0;

// SEQUENCIA M->N, quando N for o maior

            if (m<n) {
                for (sequencia=m; sequencia<=n; sequencia++) {
                    printf("%d ", sequencia);
                    soma += sequencia;
                }
// SOMA TOTAL

                printf("Sum=%d\n", soma);

            }

// SEQUENCIA N->M, quando M for o maior

            if (m>n) {
                for (sequencia=n; sequencia<=m; sequencia++) {
                    printf("%d ", sequencia);
                    soma += sequencia;
                }

// SOMA TOTAL

                printf("Sum=%d\n", soma);

            }

        }

    }

return 0;

}
