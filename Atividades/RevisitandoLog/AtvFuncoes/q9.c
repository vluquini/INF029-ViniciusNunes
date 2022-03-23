#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define bool _Bool 
#define true 1
#define false 0

  struct cliente{
    char nome[31];
    char nascimento[12];
    char cpf[20];
    char sexo;
   }resultado;

bool validarNome(char *x);
bool validarCpf(char *x);
bool validarSexo(char x);

int main(){

  struct cliente cadastrarCliente(struct cliente x);
  
  resultado = cadastrarCliente(resultado);
  
  printf("\nNome: %s\n", resultado.nome);
  printf("Data de nascimento: %s\n", resultado.nascimento);
  printf("CPF: %s\n", resultado.cpf);
  printf("Sexo: %c", resultado.sexo);
  
return 0;
}
struct cliente cadastrarCliente(struct cliente x){

  printf("**** DIGITE OS DADOS DO CLIENTE ****");
  printf("\n\nDigite o nome: ");
  fgets(x.nome, 31, stdin);
  validarNome(x.nome);
  
  printf("Digite a data de nascimento: ");
  fgets(x.nascimento, 12, stdin);

  printf("Digite o cpf: ");
  scanf("%s", x.cpf);
  getchar();
  validarCpf(x.cpf);

  printf("Digite o sexo: ");
  scanf("%c", &x.sexo);
  

return x;
}
bool validarNome(char *x){

  for(int i = 0; x[i] != '\0'; i++){
    if( (x[i] < 'A' && x[i] > 'Z') && (x[i] < 'a' && x[i] > 'z') ){
      printf("Nome invalido.\n");
      return false;
    }
  }
  
    if(strlen(x) > 20 ){
      printf("O nome deve conter apenas 20 caracteres.\n");
      return false;}

return true;
} // 02 03 2000

bool validarNascimento(char *x){

  if(x[2] != '/' && x[5] != '/'){
    printf("Data invalida.");
    return false;
  } 
  // 000 000 000 00
} 

bool validarCpf(char *x){
//  000.000.000-00

  if(x[3] != '.' || x[7] != '.' || x[11] != '-'){
    printf("CPF invalido.");
    return false;
  }
  for(int i = 0; x[i] != '\0'; i++){
    if(x[i] < '0' && x[i] > '9'){
    printf("CPF invalido.");
    return false;
  }}
return true;
}
bool validarSexo(char x){

  if(x != 'f' && x != 'F' && x != 'm' && x != 'M' && x != 'o' && x != 'O'){
    printf("Caractere invalido.");
    return false;
  }
return true;
}