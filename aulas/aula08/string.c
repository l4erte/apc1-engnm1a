#include <stdio.h>
#include <string.h>  //biblioteca de funções p/ strings

int main(){
  char nome[31]; //um nome de uma pessoa qualquer\0  \0 ---> denomina o final da matriz

  printf("Entre com seu nome: ");
  int deu_certo = scanf("%s", nome);
  printf("Ola %s!\n", nome);

  
  char primeiro_nome[21];
  char ultimo_nome[21];
  strcpy(primeiro_nome, "Arthur"); //primeiro_nome = "Arthur"
  strcpy(ultimo_nome, "Lauton");
  strcpy(nome, primeiro_nome);
  strcat(nome, ultimo_nome);  //nome = primeiro_nome + ultimo_nome; conCATenar
  printf("%s\n", nome);
  int tamanho = strlen(nome);  //len = length = tamanho
  printf("Seu nome tem %i caracteres\n", tamanho);
  printf("%s e %s são iguais? %i\n", primeiro_nome, ultimo_nome,
    strcmp(primeiro_nome, ultimo_nome)); //primeiro_nome == ultimo_nome; CoMParar
  
  
  

  
  







  return 0;
}