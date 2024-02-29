#include <stdio.h>

int main() {
  float nota1 = 0.0;
  float nota2 = 0.0;

  printf("Entre com a nota1: ");
  scanf("%f", &nota1);

  printf("Entre com a nota2: ");
  scanf("%f", &nota2);
  
  float media = 0.4*nota1 + 0.6*nota2;

  printf("A média final é %.1f\n" , media);

  if(media >= 5.0){
    printf("Aulas e aulas filho\n");
  }else {
    printf("Aí complica meu patrão\n");
  }
    return 0; 
  }