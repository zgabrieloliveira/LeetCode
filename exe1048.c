#include <stdio.h>


int main () {

//ENTRADA 

  double salario, ganho;
  
  scanf("%lf", &salario);

//MENOR QUE 400.00
  if (salario >= 0 && salario <= 400.00) {

    ganho = salario*0.15;
    salario = salario + ganho;
    printf("Novo salario: %.2lf\n", salario);
    printf("Reajuste ganho: %.2lf\n", ganho);
    printf("Em percentual: 15 %%\n");

  }
  else {

//ENTRE 400.00 E 800.00
      if (salario > 400.00 && salario <= 800.00) {

        ganho = salario*0.12;
        salario = salario + ganho;
        printf("Novo salario: %.2lf\n", salario);
        printf("Reajuste ganho: %.2lf\n", ganho);
        printf("Em percentual: 12 %%\n");


        }
        else {

//ENTRE 800.00 E 1200.00
          if (salario > 800.00 && salario <= 1200.00) {

            ganho = salario*0.1;
            salario = salario + ganho;
            printf("Novo salario: %.2lf\n", salario);
            printf("Reajuste ganho: %.2lf\n", ganho);
            printf("Em percentual: 10 %%\n");

          }
          else {

//ENTRE 1200.00 E 2000.00
              if (salario > 1200.00 && salario <= 2000.00) {
              ganho = salario*0.07;
              salario = salario + ganho;
              printf("Novo salario: %.2lf\n", salario);
              printf("Reajuste ganho: %.2lf\n", ganho);
              printf("Em percentual: 7 %%\n");

            }
            else {

//MAIOR QUE 2000.00
              ganho = salario*0.04;
              salario = salario + ganho;
              printf("Novo salario: %.2lf\n", salario);
              printf("Reajuste ganho: %.2lf\n", ganho);
              printf("Em percentual: 4 %%\n");

            }
          }
        }
      }

return 0;

}