#include <stdio.h>

int main(){

  int idade, i, j;

    for(i = 0; j >= 0; i++){
      printf("Informe sua idade: ");
      scanf("%d", &idade);
      j = idade;

      if(idade >=18)
        printf("Vc eh maior de idade.\n");
      else
        printf("Vc nao eh maior de idade.\n");
    }

  return 0;
}