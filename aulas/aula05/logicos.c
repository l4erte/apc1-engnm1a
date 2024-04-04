#include <stdio.h>
#include <math.h>

int main(){
  int numero; 
  //operadores lógicos: E, ou, negação...
  printf("\x1b[31mEntre com um numero: \x1b[0m"); 
  int deu_certo = scanf("%i", &numero);

  //0 < x < 10, 0 < x E x < 10       && ---> AND(E)
  int maior_que_0_e_menor_que_10 = numero > 0 && numero < 10;
  printf("0 < numero < 10? %i\n", maior_que_0_e_menor_que_10 );
  
  //x< 0, x > 10, x < 0 OU x > 10     || ---> OR(OU)
  int menor_que_0_ou_menor_que_10 = numero < 0 || numero > 10;
  printf("numero < 0 ou numero > 10? %i\n", menor_que_0_ou_menor_que_10);

  // x NAO < 0    ! ---> NOT(NAO)
  int nao_eh_menor_que_0 = !(numero < 0);
  printf("numero nao < 0? %i\n", nao_eh_menor_que_0);

  ú





  return 0;
}