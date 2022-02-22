#include <stdio.h>

int main(){
  char nome[30];
  double matricula;
  float sem;
  
  //Primeira forma
  /*
  printf("Nome: Vinicius Luquini Nunes");
  printf("Matricula: 20212160034");
  printf("Ingresso: Segundo semestre de 2021.");
  */
  //Segunda forma
  printf("Informe o seu nome: ");
  gets(nome);
  printf("Informe sua matricula: ");
  scanf("%lf", &matricula);
  printf("Semestre de entrada: ");
  scanf("%f", &sem);

  printf("\nNome: %s", nome);
  printf("\nMatricula: %.0lf", matricula);
  printf("\nIngresso em: %.1f", sem);

  return 0;
}