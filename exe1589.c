#include <stdio.h>
#include <stdlib.h>

int main ()
{

	int i=0, t, raio;
	int r1, r2;
	
	scanf("%d", &t);
    
    if (t>10000) // t deve ser menor ou igual a 10000
        scanf("%d", &t); 

	do // laço p/ calcular o menor raio possível que englobe r1 e r2, baseado em t casos
    {

		scanf("%d", &r1);
		scanf("%d", &r2);
		
		raio = r1+r2; 
		
		printf("%d\n", raio);

        i++;

	}
    while (i<t);

return 0;

}