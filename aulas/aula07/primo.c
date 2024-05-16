#include <stdio.h>
int main() {
  int primo;

  printf("Entre com um numero > 0:");
  int deu_certo = scanf("%i", &primo);
  if (deu_certo && primo>0) {
    int qtde_divisores = 0;
    for(int i=1; i <= primo; i++ ){
      if(primo % i == 0) {
        qtde_divisores++;
      }
    }
    if (qtde_divisores == 2) {
      printf("O numero %i é primo!\n", primo);
    }else{
      printf("O numero %i não é primo!\n", primo);
    }
  } else {
    printf("Numero invalido. Tente novamente.\n");
  }

  













  return 0;
}