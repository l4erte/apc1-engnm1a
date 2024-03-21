// faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes(1GB = 1024^3 bytes)

#include <stdio.h>
int main() {
  float giga;
  printf("Lança pra nois um valor em GB:");
  scanf("%f", &giga);
  long int conversao = giga * 1024 * 1024 * 1024;
  printf("Tal valor em bytes é: %li", conversao);






  return 0;
}