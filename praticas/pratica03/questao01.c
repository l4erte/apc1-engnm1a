//faça um programa em c que calcule a media final a apartir da formula (0,4 x A1) + (0,6 X A2). Considere A1 e A2 numeros reais entre 0 e 10.
#include <stdio.h>
int main() {
  float a1, a2;
  printf("Entre com a nota da A1:");
  scanf("%f", &a1);
  printf("Entre com a nota da A2:");
  scanf("%f", &a2);
  printf("A media final é %.2f", 0.4*a1 + 0.6*a2);
  
  

  





  return 0;
}