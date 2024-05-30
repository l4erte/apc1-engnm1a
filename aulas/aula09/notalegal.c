#include <stdio.h>
#include <string.h>

int main(){
  enum unidade_e{
    unidade,
    caixa,
    peso,
  lata
  };
  struct produto_t{  //agrupa variáveis
    char nome[31];
    int quantidade;
    int unidade;
    float preco;
    float valor;
  };
  float total = 0.0f;
  struct produto_t produto[5];
  for(int i = 0; i < 5; i++){
  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%s", produto[i].nome);

  printf("Entre com a quantidade do produto: ");
  deu_certo = scanf("%i", &produto[i].quantidade);

  printf("Entre com a unidade do produto: ");
  printf("0-unid, 1-caixa, 2-peso, 3-lata: ");
  deu_certo = scanf("%i", &produto[i].unidade);

  printf("Entre com o preço do produto: ");
  deu_certo = scanf("%f", &produto[i].preco);

  produto[i].valor = produto[i].preco * produto[i].quantidade;
  total = total + produto[i].valor;
  }
  printf("\x1b[47m-------------------------------\n");
  printf("       N O T A  L E G A L     \n");
  printf("-------------------------------\n");
  printf("ITEM           QTD UND    PREÇO     VALOR\n");
  for(int i=0; i<5; i++){
    printf("%-14s %03i", produto[i].nome, produto[i].quantidade);
    switch(produto[i].unidade){
      case 0: printf(" UN"); break;
      case 1: printf(" CX"); break;
      case 2: printf(" KG"); break;
      case 3: printf(" LT"); break;
      
  }
  printf("%10.2f%10.2f\n", produto[i].preco, produto[i].valor);
  }
  printf("Total........................: %10.2f\n", total);
  return 0;

}