#include<stdio.h>

int maxDiv(int a, int b){

    if(b == 0)
        return a;
    else
        return maxDiv(b, a % b );

 }
int main(){

    int a = 8, b = 8, mdc;

    mdc = maxDiv(a, b);
    
    printf("O maior divisor comum eh: %d", mdc);

    return 0;
}