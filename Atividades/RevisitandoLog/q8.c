#include <stdio.h>

int main(){

  int numero, fatorial = 1;
  printf("Digite um numero: ");
  scanf("%d", &numero);

  for(int i = numero; i > 1; i--)
    fatorial *= i;
  
  printf("O fatorial eh %d.", fatorial);

  return 0;
}