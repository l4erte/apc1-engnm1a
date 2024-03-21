//faca um programa em c que calcule o perimetro de uma pizza(P = 2 x pi x r). considere o raio um numero inteiro e a constante pi=3,1416.
#include <stdio.h>
int main() {
  int raio;
  const float PI = 3.1416;
  printf("Diz pra nois o raio da sua pizza:");
  scanf("%i", &raio);
  float perimetro = PI * raio * 2;
  printf("O perímetro da pizza é: %.2f", perimetro);
  

  





  return 0;
}