#include <stdio.h>

int main () {

//ENTRADA

    int N1, N2, N3;
    int A, B, C;
    int t;

    scanf("%d %d %d", &N1, &N2, &N3);

    A = N1;
    B = N2; 
    C = N3;

//SAIDA

    if (A > B) 
    {
    t = A ;
    A = B;
    B = t;
    }

    if (A > C) 
    {
    t = A;
    A = C;
    C = t;
    }

    if (B > C) 
    {
    t =  B;
    B = C;
    C = t;
    }


    printf("%d\n%d\n%d\n", A, B, C);
    printf("\n");
    printf("%d\n%d\n%d\n", N1, N2, N3);

return 0;

}