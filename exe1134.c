#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int combustivel, alcool=0, gasolina=0, diesel=0;

    while (combustivel!=4)
    {
        scanf("%d", &combustivel);

        if (combustivel==1)
            alcool++;
        if (combustivel==2)
            gasolina++;
        if (combustivel==3)
            diesel++;
        
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);


return 0;

}