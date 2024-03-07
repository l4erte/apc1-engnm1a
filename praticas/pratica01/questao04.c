/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

#include <stdio.h>

int main() {

  float preco_inicial = 0.0;
  
  printf("informe o preço inicial: ");
  scanf("%f", &preco_inicial);
  
  const float ICMS = 0.17 * preco_inicial;
  const float COFINS = 0.076 * preco_inicial;
  const float PIS_PASEP = 0.0165 * preco_inicial;
  

  float preco_final = ICMS + COFINS + PIS_PASEP + preco_inicial;
  printf("Preço inicial = %f\n", preco_inicial);
  printf("Preço final = %f\n", preco_final);

  
  return 0;

  

}