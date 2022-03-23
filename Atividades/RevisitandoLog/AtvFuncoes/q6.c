#include <stdio.h>

void main(){
  char ler3Letras(char *x);
  char letras[5];

  ler3Letras(letras);
  printf("As letras sao: %s", letras);

  
}
char ler3Letras(char *x){
  char *letras;
  
  printf("Digite 3 letras: ");
  scanf("%s", x);
  
  return *x;
}
/* 
#include <stdio.h>

int main() {
    char ler3Letras(char letras[]);
    char letras[3];
    
    ler3Letras(letras);
    
    printf("As letras sao: %s", letras );
    
    
    return 0;
}
char ler3Letras(char letras[]){
    //char letras[3];
    
    //for(int i = 0; i < 3; i++){
    printf("Digite 3 letras: ");
    scanf("%s", letras);
    
return *letras;
} */