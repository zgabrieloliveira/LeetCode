#include <stdio.h>

int main () {

//ENTRADA

    int CODIGO, QUANTIDADE;
    double C1, C2, C3, C4, C5;

    scanf("%d %d",&CODIGO, &QUANTIDADE);

    C1 = 4.00*QUANTIDADE;
    C2 = 4.50*QUANTIDADE;
    C3 = 5.00*QUANTIDADE;
    C4 = 2.00*QUANTIDADE;
    C5 = 1.50*QUANTIDADE;

//SAÍDA

    if (CODIGO == 1)
    { printf("Total: R$ %.2lf\n", C1); }
    else
    {
    if (CODIGO == 2)
    { printf("Total: R$ %.2lf\n", C2); }
    if (CODIGO == 3)
    { printf("Total: R$ %.2lf\n", C3); }
    if (CODIGO == 4)
    { printf("Total: R$ %.2lf\n", C4); }
    if (CODIGO ==5)
    { printf("Total: R$ %.2lf\n", C5); }
    }
return 0;

}