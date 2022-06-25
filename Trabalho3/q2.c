#include <stdio.h>
/*
LÓGICA FEITA TOMANDO COMO BASE OS 2 PRIMEIROS NUMEROS DA SEQUENCIA FIBONACCI COMO 0 E 1.
*/  
int fib(int n){

    if(n <= 1){
        return 1;
    }else
       return fib(n-1) + fib(n-2);
       
}

int main() {
    
    int n, resp = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    resp = fib(n);
    
    printf("A %d sucessao de fibonacci eh: %d", n, resp);
    
    return 0;
}