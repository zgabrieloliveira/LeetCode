#include <stdio.h>

int main () {
    
    double salario;

    scanf("%lf", &salario);

//INSENTO
    if (salario <= 2000.00)
    printf ("Isento\n");

//OITO POR CENTO
    else if (salario <= 3000.00)
    printf ("R$ %.2lf\n", (salario-2000.00)*0.08);    

//DEZOITO POR CENTO
    else if (salario <= 4500.00)
    printf ("R$ %.2lf\n", (1000.00*0.08) + (salario-3000.00)*0.18);

//VINTE OITO POR CENTO
    else
    { printf ("R$ %.2lf\n", (1000.00*0.08) + (1500.00*0.18) + (salario-4500.00)*0.28); }

return 0;

}