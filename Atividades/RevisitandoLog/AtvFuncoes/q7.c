#include <stdio.h>

void main(){
  char ler3Letras(char *x);
  char letras[30];

  ler3Letras(letras);
  printf("As 3 palavras sao: %s", letras);

}
char ler3Letras(char *x){
  char *letras;
  
  printf("Digite 3 palavras: ");
  fgets(x, 30, stdin);
  
  return *x;
}