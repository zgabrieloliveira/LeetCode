#include<stdio.h>
#include<math.h>

int main(){

    int DINHEIRO;
    int NOTA100, NOTA50, NOTA20, NOTA10, NOTA5, NOTA2;
    int N50, N20, N10, N5, N2;
    int MOEDAS;
    int M1, MOEDA1, MOEDA050, MOEDA025, MOEDA010, MOEDA005, MOEDA001;
    double MONTANTE;

    scanf("%lf", &MONTANTE);

    DINHEIRO = (int)MONTANTE;
    MONTANTE -= DINHEIRO;
    MOEDAS = (MONTANTE*100);

//NOTAS
    NOTA100 = DINHEIRO/100;
    N50 = DINHEIRO%100;
    NOTA50 = N50/50;
    N20 = N50%50;
    NOTA20 = N20/20;
    N10 = N20%20;
    NOTA10 = N10/10;
    N5 = N10%10;
    NOTA5 = N5/5;
    N2 = N5%5;
    NOTA2 = N2/2;
//MOEDAS
    M1 = N2%2;
    MOEDA1 = M1/1;
    MOEDA050 = MOEDAS/50;
    MOEDA025 = (MOEDAS%50)/25;
    MOEDA010 = (((MOEDAS%50)%25)/10);
    MOEDA005 = ((((MOEDAS%50)%25)%10)/5);
    MOEDA001 = ((((MOEDAS%50)%25)%10)%5)/1;


//NOTAS
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", NOTA100);
    printf("%d nota(s) de R$ 50.00\n", NOTA50);
    printf("%d nota(s) de R$ 20.00\n", NOTA20);
    printf("%d nota(s) de R$ 10.00\n",NOTA10);
    printf("%d nota(s) de R$ 5.00\n", NOTA5);
    printf("%d nota(s) de R$ 2.00\n",NOTA2);
//MOEDAS
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", MOEDA1);
    printf("%d moeda(s) de R$ 0.50\n", MOEDA050);
    printf("%d moeda(s) de R$ 0.25\n", MOEDA025);
    printf("%d moeda(s) de R$ 0.10\n", MOEDA010);
    printf("%d moeda(s) de R$ 0.05\n", MOEDA005);
    printf("%d moeda(s) de R$ 0.01\n", MOEDA001);

return 0;

}