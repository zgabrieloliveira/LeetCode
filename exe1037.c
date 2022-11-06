#include <stdio.h>
#include <math.h>

int main () {

    double X;

//ENTRADA
    scanf("%lf", &X);

//SAÍDA
    
    if (X < 0 || X > 100.000000)
    { printf("Fora de intervalo\n"); }
    else 
    {
//INTERVALO 0,25
    if (X>=0 && X<=25.0000000 )
    { printf("Intervalo [0,25]\n"); }

//INTERVALO 25,50
    if (X>25.0000000 && X<=50.0000000)
    { printf("Intervalo (25,50]\n"); }

//INTERVALO 50,75
    if (X>50.0000000 && X<=75.0000000)
    { printf("Intervalo (50, 75]\n"); }

//INTERVALO 75,100
    if (X>75.0000000 && X<=100.0000000)
    { printf("Intervalo (75,100]\n"); }
    }

return 0;

}