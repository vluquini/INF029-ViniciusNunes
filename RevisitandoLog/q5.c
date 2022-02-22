#include <stdio.h>

int main(){

  int idade;
  printf("Informe sua idade: ");
  scanf("%d", &idade);

  if(idade >=18)
    printf("Vc eh maior de idade.");
  else
    printf("Vc nao eh maior de idade.");

  return 0;
}