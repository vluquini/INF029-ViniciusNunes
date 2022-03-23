#include <stdio.h>

struct valores{
  int num[4];
};

int main(){
  struct valores ler4Numeros(struct valores x);
  struct valores resultado;

  
  resultado = ler4Numeros(resultado);
  
  for(int i = 0; i < 4; i++)
      printf("\nValores: %d", resultado.num[i]);
  
}
struct valores ler4Numeros(struct valores x){
  struct valores a;
  for(int i = 0; i < 4; i++){
      printf("Digite o numero %d: \n", i+1);
      scanf("%d", &a.num[i]);
  }
  return a;
}