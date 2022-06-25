#include<stdio.h>

int somar(int n){

    if(n <= 1){
      return n;
    }else{
      return n + somar(n - 1);
    }

 }
int main(){
  
    int n;
    int soma = 0;
  
    printf("Digite um numero: ");
    scanf("%d", &n);
  
    soma = somar(n);
    printf("A soma eh %d.", soma);
  
    return 0;
}