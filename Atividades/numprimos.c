#include <stdio.h>

int main(){
  //**para corrigir...
  int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    if(numero <=1)
      printf("O numero nao eh primo.");
    for(int i = 2; i <= numero; i++){
      if(numero % i != 0){
        printf("O numero %d eh primo.", numero);
        break;
      }
      else{
        printf("O numero %d nao eh primo.", numero);
        break;
      }
    }
  return 0;
}
