#include <stdio.h>
#include <stdlib.h>

int main(){
  int opcao = 0;
  while(opcao != 4){
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Ver Ranking\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção ---> ");
    deu_certo = scanf("%i", &opcao);
    while(getchar() != '\n'); //limpar buffer do teclado
    if (!deu_certo){
      opcao = 0;
    }
    switch(opcao){
      case 1: {
        char nome[31];
        printf("Qual o seu nome? ");
        deu_certo = scanf("%[^\n]s", nome);
        while(getchar() != '\n'); //limpar buffer do teclado
        printf("Olá %s!\n", nome);
        printf("Pressione Enter para iniciar...");
        getchar();
        break;
      }
      case 2: { 
        deu_certo = system("clear");
        printf("Ranking - Top 5\n");
        printf("1: laerte - 10000 pontos\n");
        printf("2: Brito - 8000 pontos\n");
        printf("3: Gouveia - 7500 pontos\n");
        printf("4: Déter - 5000 pontos\n");
        printf("5: caqui - 350 pontos\n");
        printf("Pressione Enter para voltar...");
        getchar();
        break;
      }
      case 3: {     break;
      }
      case 4:       printf("Até logo!\n");        break;
      default: 
        printf("Opção inválida! Pressione Enter para prosseguir");
        getchar();
      
      
      
    }
  }
  

  






  return 0;
}