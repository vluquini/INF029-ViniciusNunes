#include <stdio.h>

#define TAMANHO_NOME 30

int main(){
  void retiraNovaLinha(char *);
  char nome[TAMANHO_NOME];
  double matricula;
  float sem;
  char semestre[13];
  
  //Primeira forma
  /*
  printf("Nome: Vinicius Luquini Nunes");
  printf("Matricula: 20212 160034");
  printf("Ingresso: Segundo semestre de 2021.");
  */
  //Segunda forma
  printf("Informe o seu nome: ");
  fgets(nome, TAMANHO_NOME, stdin);
    retiraNovaLinha(nome);

  printf("Informe sua matricula: ");
  scanf("%lf", &matricula);
  printf("Semestre de entrada: ");
  scanf("%f", &sem);

  printf("\nNome: %s", nome);
  printf("\nMatricula: %.0lf", matricula);
  printf("\nIngresso em: %.1f", sem);

  return 0;
}
void retiraNovaLinha(char *texto){
    for(int caracter = 0; texto[caracter] != '\0'; caracter++){
        if(texto[caracter+1] == '\0'){ 
                texto[caracter] = '\0';}}
}