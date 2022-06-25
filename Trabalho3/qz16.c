#include <stdio.h>

int fatDuplo(int n){

   if(n <= 1)
        return 1;
    else if(n % 2 == 0)
        return 0;
    else
        return n * fatDuplo(n-2);
       
}

int main() {
    
    int n, fat = 0;
    printf("Digite um numero impar positivo: ");
    scanf("%d", &n);
    
    fat = fatDuplo(n);
    
    printf("O fatorial deste numero eh: %d", fat);
    
    return 0;
}