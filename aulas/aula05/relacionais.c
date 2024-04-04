#include <stdio.h>

int main(){
  int numero1;
  int numero2;


  printf("Entre com o \x1b[31mprimeiro numero: \x1b[0m");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o \x1b[31msegundo numero: \x1b[0m");
  deu_certo = scanf("%i", &numero2);

  int sao_iguais = numero1 == numero2;
  printf("\x1b[32mOs numeros sao iguais? %i\n", sao_iguais);

  int sao_diferentes = numero1 != numero2;
  printf("Os numeros sao diferentes? %i\n", sao_diferentes);

  int eh_maior = numero1 > numero2;
  printf("O primeiro numero eh maior? %i\n", eh_maior);

  int eh_menor = numero1 < numero2;
  printf("O primeiro numero eh menor? %i\n", eh_menor);

  int eh_maior_igual = numero1 >= numero2;
  printf("O primeiro numero eh maior igual? %i\n", eh_maior_igual);

  int eh_menor_igual = numero1 <= numero2;
  printf("O primeiro numero eh menor igual? %i\n", eh_menor_igual);

  

  
  











  return 0;
}