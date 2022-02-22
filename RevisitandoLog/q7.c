#include <stdio.h>

int main(){
  //**para corrigir...
  int numero, primo=1;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    
    for(int i = 2; i < numero; i++){
        if(numero % i == 0){
            primo = 0;
            break;
        }
    }
    

    if(primo == 1)
        printf("O numero %d eh primo.", numero);
    else
        printf("O numero %d nao eh primo.", numero);
    
  return 0;
}