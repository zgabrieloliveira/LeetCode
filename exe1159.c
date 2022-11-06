#include <stdio.h>
#include <stdlib.h>

int main ()
{

  int x; // varíavel p/ leitura 
  int i, x2; // variáveis p/ criação de laços e manipulação de dados 
  int somapar=0; // variável p/ armazenar a soma de pares 


    while (x!=0) // laço base p/ ser executado até x=0
    {


        scanf("%d", &x);


        for (i=0, x2=x; i<5; x2++) // laço p/ somar 5 pares consecutivos a partir de x
        {

            if (x2%2==0) // filtragem de pares 
            {

                somapar += x2;
                i++;

            }

            // quando x=0, o programa deve ser encerrado        
            if (x==0)
                return 0;
                
        }


        printf("%d\n", somapar);

        // após toda a operação, esvaziar a variável de soma   
        somapar=0;

    }


return 0;


}