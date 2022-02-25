#include <stdio.h>

#include <stdio.h>

void main(){
    int num, cont = 0;
    
    printf("Informe um numero: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++)
        if(num % i == 0)
            cont++;
            
    if(cont == 2)
        printf("O numero %d eh primo.", num);
    else
        printf("O numero %d n eh primo.", num);
}