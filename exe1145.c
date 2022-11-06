#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x, y; // variáveis lidas 
    int i, i2=1; // variáveis p/ sequência

	scanf("%d %d", &x, &y);
	
    x>1 && x<20;
    y>x && y<100000;
    
	for (i=1; i<=y; i++)
    {
		if (i2!=x)
        {
			i2++;
			printf("%d ", i);			
		}
        else
        {
			printf("%d\n", i);	
			i2=1;
		}
	}
	
return 0;

}