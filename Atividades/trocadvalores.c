#include <stdio.h>

int main(){
  
  int a, b;
    printf("Valor A: ");
    scanf("%d", a);
    printf("Valor B: ");
    scanf("%d", b);

    a = b + a;
    b = a - b;
    a = a - b;
    printf("%d\n%d", a, b);

  return 0;
}