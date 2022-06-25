#include <stdio.h>

int fatorial(int n){
    
    if(n <= 1){
        return n;
    }else
       return n * fatorial(n-1);     
}

int main() {
    
    int n, fat = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    fat = fatorial(n);
    
    printf("O fatorial deste numero eh: %d", fat);
    
    return 0;
}