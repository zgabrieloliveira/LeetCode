#include <stdio.h>
#include <math.h>

int main () {

    double A, B, C;
    double DELTA;
    double R1, R2;
    
//ENTRADA
    scanf("%lf %lf %lf",&A, &B, &C);

    DELTA = B*B - 4.0 * A * C;
    R1 = (-B+sqrt(DELTA)) / (2.0*A);
    R2 = (-B-sqrt(DELTA)) / (2.0*A);

//SAÍDA
    if ((DELTA < 0) || (A == 0))
    { printf("Impossivel calcular\n"); }
    else 
    { printf("R1 = %.5lf\n", R1); 
      printf("R2 = %.5lf\n", R2); }

return 0;

}