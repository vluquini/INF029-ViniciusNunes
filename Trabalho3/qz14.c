#include <stdio.h>

void imprimir(int n){

    if(n % 2 != 0)
        printf("Numero invalido.");
    else if(n == 0)
        printf("%d ", n);
    else{
        imprimir(n - 2);
        printf("%d ", n);
    }
}

int main () {

    int n;

    printf("Digite um valor inteiro par positivo: ");
    scanf("%d", &n);

    imprimir(n);

    return 0;
}