#include <stdio.h>

int main() {
  int numero1;
  int numero2;
  int numero3;

    printf("Vamos comparar três números\nEntre com o valor do 1º número:\n");
    scanf(" %i", &numero1);
    printf("Entre com o valor do 2º número:\n");
    scanf(" %i", &numero2);
    printf("Entre com o valor do 3º número:\n");
    scanf(" %i", &numero3);
  if (numero1 == numero2 || numero1 == numero3){
        printf("O 1º número é igual ao 2º ou ao 3º");
    } else if(numero1 > numero2 && numero2 > numero3) {
            printf("numero1 é o maior de todos\n");
        }
            else if (numero1 < numero2 && numero2 < numero3) {
                printf("numero1 é o menor de todos\n");
                }
                else{
                    printf("O 1º número está entre os outros números\n");
                }
    
  
    return 0;
}