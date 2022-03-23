#include <stdio.h>

int main(){
    int calcFat(int valor);
    int numero, fatorial;
    
    do{
        printf("Informe um numero: ");
        scanf("%d", &numero);
    
        fatorial = calcFat(numero);
    }while(numero > 0);

    return 0;
}
int calcFat(int valor){
    int fatorial = 1;
    
    if(valor < 0)
        printf("Erro! Insira um valor positivo.\n\n");
    else{
        for(int i = valor; i > 1; i--)
            fatorial *= i;
        printf("O fatorial eh %d.\n\n", fatorial);
    }
    
    return fatorial;
}