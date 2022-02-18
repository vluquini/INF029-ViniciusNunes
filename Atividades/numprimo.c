#include <stdio.h>

int main(){
  
  int numero;
    printf("Digite um valor: ");
    scanf("%d", &numero);

    if(numero <=1)
      printf("O valor nao eh primo.");
    
    for(int i = 2; i < numero; i++){
      if(numero % i == 0){
        printf("O valor nao eh primo.");
        break;
      }
      else{
        printf("O valor eh primo.");
        break;
      }
    }
return 0;        
}
