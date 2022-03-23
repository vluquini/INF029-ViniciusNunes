#include <stdio.h>
#include <stdlib.h>
  struct cliente{
    char nome[31];
    char nascimento[12];
    char cpf[16];
   }resultado;

int main(){

  struct cliente cadastrarCliente(struct cliente x);
  
  resultado = cadastrarCliente(resultado);
  
  printf("\nNome: %s\n", resultado.nome);
  printf("Data de nascimento: %s\n", resultado.nascimento);
  printf("CPF: %s", resultado.cpf);
  
  
return 0;
}
struct cliente cadastrarCliente(struct cliente x){
  
  printf("**** DIGITE OS DADOS DO CLIENTE ****");
  printf("\n\nDigite o nome: ");
  fgets(x.nome, 31, stdin);
  
  printf("Digite a data de nascimento: ");
  fgets(x.nascimento, 12, stdin);
  
  printf("Digite o cpf: ");
  fgets(x.cpf, 16, stdin);

  return x;
}