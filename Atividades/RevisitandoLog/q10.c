#include <stdio.h>
#include <string.h>
#define TAM 3

typedef struct ficha_pessoas{
  char nome[31];
  int idade;
  char sexo;
  char cpf[16];
} Pessoa;

int main(){

  Pessoa pessoas[TAM];

  for()
  printf("Informe o seu nome: ");
  fgets(pessoas[].nome, 29, stdin);
  printf("Informe sua idade: ");
  scanf("%d", pessoas.idade);
  printf("Informe seu sexo: ");
  scanf("%c", pessoas.sexo);
  printf("Informe seu CPF: ");
  fgets(pessoas.cpf, 14, stdin);

  


  
}