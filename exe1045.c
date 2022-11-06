#include <stdio.h>

int main () {

//ENTRADA 

    double A, B, C;
    double temp;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    }

    if (A < C) {
        temp = A;
        A = C;
        C = temp; 
    }

    if (B < C) {
        temp = B;
        B = C;
        C = temp; 
    }

//SAIDA 

if (A  >= (B+C)) { printf ("NAO FORMA TRIANGULO\n"); }
else {
    
    if (A*A == B*B + C*C) { printf("TRIANGULO RETANGULO\n"); }
    if (A*A > B*B + C*C) { printf("TRIANGULO OBTUSANGULO\n"); }
    if (A*A < B*B + C*C) { printf("TRIANGULO ACUTANGULO\n"); }
    if (A==B && A==C && B==C) { printf("TRIANGULO EQUILATERO\n"); }
    else {
        if (A==B || A==C || B==C) { printf("TRIANGULO ISOSCELES\n"); }
    }
}

return 0;

}