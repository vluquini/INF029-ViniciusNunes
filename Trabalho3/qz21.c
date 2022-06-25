#include <stdio.h>

int tribonacci(int n){

    if(n <= 1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
       
}

int main() {
    
    int n, resp = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    resp = tribonacci(n);
    
    printf("A %d sucessao de tribonacci eh: %d", n, resp);
    
    return 0;
}