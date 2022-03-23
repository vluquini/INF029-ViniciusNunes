#include <stdio.h>

int main(){
    int Soma(int valor1, int valor2);
    int a, b, result;

    printf("Valor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);

    result = Soma(a, b);
    printf("O valor da soma eh %d", result);

    return 0;
}
int Soma(int valor1, int valor2){
    int result = valor1 + valor2;
    
    return result;
}