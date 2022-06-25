#include <stdio.h>
#define TAM 10

int main() {
    int num[TAM], primos[TAM] = {0}, cont = 0, soma = 0;
    
    for(int i = 0; i < TAM; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &num[i]);
    }
    //percorrendo o vetor de numeros
    for(int i = 0; i < TAM; i++){
    //encontrando os numeros primos no vetor 'num'
        for(int j = 1; j <= num[i]; j++){
            if(num[i] % j == 0)
            cont++;
        } //transferindo os primos de um vetor ao outro
        if(cont == 2)
        primos[i] = num[i];
        
        cont = 0;
    }
    printf("\nOs primos sao:");
    for(int k = 0; k < TAM; k++){
        if(num[k] == primos[k])
        printf(" %d", primos[k]);
    }
    for(int k = 0; k < TAM; k++){
        soma += primos[k];
    }
    printf("\nA soma eh: %d.", soma);
    
    return 0;
}


