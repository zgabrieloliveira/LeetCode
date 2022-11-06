#include <stdio.h>
#include <stdlib.h>

int main() {

    float n1, n2, n3, n4;
    float media, exame, mediafinal;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1*2.0 + n2*3.0 + n3*4.0 + n4) / 10.0;
    printf("Media: %.1f\n", media);

//APROVADO
    if (media >= 7.0) {

    printf("Aluno aprovado.\n");
    }

//REPROVADO
    else if (media < 5.0) {

        printf("Aluno reprovado.\n");
    }

//EM EXAME
    else if (media >= 5.0 && media <= 6.9) {

        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);


        mediafinal = (exame+media) / 2.0;

//APROVADO EM EXAME 
    if(mediafinal >= 5.0) {

        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", mediafinal);
    }

//REPROVADO EM EXAME 
    else if (mediafinal <= 4.9) {

        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", mediafinal);
        } 

    }
return 0;

}