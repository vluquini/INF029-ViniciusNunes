#include<stdio.h>
#define TAM 7

int somarVet(int n[], int tam){

    if(tam == 1){
      return n[0];
    }else{
      return n[tam - 1] + somarVet(n, tam - 1);
    }

 }
int main(){
  
    int vetor[TAM] = {1, 2, 3, 5, 15, 9, 13};
    int soma = 0, tam = TAM;

    soma = somarVet(vetor, tam);
    printf("A soma eh: %d", soma);

    return 0;
}