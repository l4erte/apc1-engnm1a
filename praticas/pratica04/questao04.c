//4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
#include <stdio.h>
#include <math.h>

int main(){
  float largura;
  float comprimento;
  printf("Insira a largura do terreno: ");
  scanf("%f", &largura);
  printf("Insira o comprimento do terreno: ");
  scanf("%f", &comprimento);

  float areametro = largura * comprimento;
  float areahectar = areametro / 10000;

  printf("A área do terreno em metros é: %.2f\n", areametro);
  printf("A área do terreno em hectares é: %.2f\n", areahectar);
  

  

  












  return 0;
}