#include <stdio.h>

int main(){

  int idade, i, j;

    for(i = 0; j >= 0; i++){
      printf("Informe sua idade: ");
      scanf("%d", &idade);
      j = idade;

      if(idade >=18)
        printf("\nVc eh maior de idade.");
      else
        printf("\nVc nao eh maior de idade.");
    }

  return 0;
}