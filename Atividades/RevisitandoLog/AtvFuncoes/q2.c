#include <stdio.h>

int main(){
      int Subt(int valor1, int valor2, int valor3);
      int a, b, c, result;
    
      printf("Valor 1: ");
      scanf("%d", &a);
      printf("Valor 2: ");
      scanf("%d", &b);
      printf("Valor 1: ");
      scanf("%d", &c);
      result = Subt(a, b, c);
      printf("O valor da subtracao eh: %d", result);
    
      return 0;
}
int Subt(int valor1, int valor2, int valor3){
      int result = valor1 - valor2 - valor3;
      
      return result;
}