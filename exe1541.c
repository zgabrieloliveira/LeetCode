#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

     int a, b, c, ladoterreno; 

     while(1)
     {

        scanf("%d %d %d" , &a, &b, &c);

     	if (a==0 || b==0 || c==0) // nenhum dos valores pode ser 0
        {
            break;
        }
        
        else
        {
            ladoterreno = sqrt((a*b*100)/c);
            printf("%d\n", ladoterreno);
        }

     }


return 0;


}