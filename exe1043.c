#include <stdio.h>

int main () {

//ENTRADA 

    double a, b, c;
    double PERIMETRO, AREA;

    scanf("%lf %lf %lf", &a, &b, &c);

    PERIMETRO = a+b+c;
    AREA = (a+b)*c / 2.0; 

//SAIDA

    if ((a < b+c) && (b < a+c) && (c < a+b))
    { printf("Perimetro = %.1lf\n", PERIMETRO); }
    else
    { printf("Area = %.1lf\n", AREA); }
    
    return 0;

}