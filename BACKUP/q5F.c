#include <stdio.h>

int main() {

    int inverterNum(int num);
    int num, invertido = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    invertido = inverterNum(num);

    printf("O valor invertido eh >> %d", invertido);

return 0;
}

int inverterNum(int num){

    int aux, invertido = 0;

    while(num != 0){
    aux = num % 10;
    invertido = invertido * 10 + aux;
    num = num / 10;
    }

return invertido;
}