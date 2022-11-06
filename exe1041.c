#include <stdio.h>

int main () {

    double X, Y;

    scanf("%lf %lf", &X, &Y);

//ORIGEM
    if (X==0.0 && Y==0.0)
    { printf("Origem\n"); }

    if (X!=0.0 && Y==0.0)
    { printf("Eixo X\n"); }
    
    if (X==0.0 && Y!=0.0)
    { printf("Eixo Y\n"); }
    
//Q1
    if (X>0.0 && Y>0.0)
    { printf("Q1\n"); }

//Q2
    if (X<0.0 && Y>0.0)
    { printf("Q2\n"); }

//Q3
    if (X<0.0 && Y<0.0)
    { printf("Q3\n"); }
    
//Q4
    if (X>0.0 && Y<0.0)
    { printf("Q4\n"); }

return 0;

}