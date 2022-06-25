#include <stdio.h>

void imprimir(int n){

    if(n % 2 != 0)
        printf("Numero invalido.");
    else if(n == 0)
        printf("%d ", n);
    else{
        printf("%d ", n);
        imprimir(n - 2);
    }
}

int main () {

    int n;

    printf("Digite um valor inteiro par positivo: ");
    scanf("%d", &n);

    imprimir(n);

    return 0;
}