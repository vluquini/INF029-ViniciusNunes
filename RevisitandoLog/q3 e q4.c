#include <stdio.h>

int main(){
  //**TROCANDO VALORES DE UMA VARIAVEL PARA OUTRA**
  int a, b, c;
  printf("Valor A: ");
  scanf("%d", &a);
  printf("Valor B: ");
  scanf("%d", &b);
  //SEM UMA VARIAVEL AUXILIAR
  
  a = b + a;
  b = a - b;
  a = a - b;
  
  //COM VARIAVEL AUXILIAR
  /*
  c = a;
  a = b;
  b = c;
  */
  printf("\nValor A: %d \nValor B: %d", a, b);

  return 0;
}

int main(){
  //INVERTENDO VALOR DE UMA VARIAVEL
  int m, c, d, u, numero;

  printf("Informe o primeiro valor: ");
  scanf("%d", &numero);

  u = numero % 10;
  d = numero % 100 / 10;
  c = numero / 100 % 10;
  m = numero / 1000;
  
  printf("%d%d%d%d", u, d, c, m);

  return 0;
}
