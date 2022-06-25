#include <stdio.h>

void imprimir(int n){
  
    if(n == 0)
        printf("%d ", n);
    else{
        printf("%d ", n);
        imprimir(n - 1);
    }
}

int main () {

    int n;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    imprimir(n);

    return 0;
}