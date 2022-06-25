#include<stdio.h>

int potencia(int k, int n){

    if(n == 0){
      return 1;
    }else if(n == 1){
      return k;
    }else{
      return  k * potencia(k, n-1);
    }

 }
int main(){
  
    int k = 3, n = 8;
    int resp = 0;
  /*
    printf("Digite um numero: ");
    scanf("%d", &k);
    printf("Digite outro numero: ");
    scanf("%d", &n);
  */
    resp = potencia(k, n);
    printf("O resultado eh: %d", resp);
  
    return 0;
}