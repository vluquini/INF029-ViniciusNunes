//FUNÇÕES NÃO RECEBEM VETORES COMO ARGUMENTO, EXCETO POR STRUCTS OU PONTEIROS.
#include <stdio.h>

struct valores{
  int num[3];
};

int main(){
  struct valores ler3Numeros(struct valores x);
  struct valores resultado;

  
  resultado = ler3Numeros(resultado);
  
  for(int i = 0; i < 3; i++)
      printf("\nValores: %d", resultado.num[i]);
  
}
struct valores ler3Numeros(struct valores x){
  struct valores a;
  for(int i = 0; i < 3; i++){
      printf("Digite o numero %d: \n", i+1);
      scanf("%d", &a.num[i]);
  }
  return a;
}