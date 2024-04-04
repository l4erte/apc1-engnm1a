//8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).

#include <stdio.h>
#include <math.h>

int main(){
  int x1, y1;
  int x2, y2;
  printf("Insira as coordenadas do \x1b[31mprimeiro ponto: \x1b[0m");
  scanf("%i %i", &x1, &y1);
  printf("Insira as coordenadas do \x1b[31msegundo ponto: \x1b[0m");
  scanf("%i %i", &x2, &y2);
  //função sqrt(raiz quadrada) recebe somente double como argumento.
  int x = x2 - x1;
  int y = y2 - y1;
  double distancia = sqrt(pow(x, 2) + pow(y, 2));
  
  printf("A distância entre os dois pontos é de \x1b[31m%.2f\n", distancia);
  
  
  
  









  return 0;
}