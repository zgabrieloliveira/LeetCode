#include <stdio.h>
#include <math.h>

int main () {

    double x1, y1;
    double x2, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    float distancia_entre_dois_pontos = sqrt(pow (x2-x1), 2) + pow(y2-y1), 2));

    printf("%.4f", distancia_entre_dois_pontos);

return 0;

}