#include<stdio.h>

int inverter(int n){
  
    if(n==0){
      return n;
    }else{ 
       printf("%d", n % 10);
       n = n / 10;
       return inverter(n);
    }

 }
int main(){
  
    int numero;
  
    printf("Digite um numero: ");
    scanf("%d",&numero);
  
    inverter(numero);
  
    return 0;
}