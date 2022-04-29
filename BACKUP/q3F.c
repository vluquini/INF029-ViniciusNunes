#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
CASE SENSITIVE = 1 > A PESQUISA DEVE CONSIDERAR DIFERENÇAS ENTRE MAIÚSCULAS E MINÚSCULAS;
CASE = != 1 > A PESQUISA NAO CONSIDERA DIFERENÇAS.
*/
int main(){

    char caseSensitive(char texto[]);
    char texto[250];
    char caractere;
    int resultado = 0;
    int isSensitive;

    printf("Informe o texto: ");
    fgets(texto, 250, stdin);

    printf("\nDigite o caractere para buscar: ");
    scanf("%c", &caractere);

    printf("Case sensitive? (1 PARA SIM, != 1 PARA NAO): ");
    scanf("%d", &isSensitive);

    if(isSensitive != 1){
        *texto = caseSensitive(texto);
        caractere = toupper(caractere);
    }
/*
    printf("\n%s", texto);
    printf("%c", caractere);
*/
    for(int i = 0; texto[i] != '\0'; i++){
        if(texto[i] == caractere)
            resultado++;
    }

    printf("\nEste caractere aparece %d vezes.", resultado);

return 1;
}
char caseSensitive(char texto[]){

    for(int k = 0; texto[k] != '\0'; k++){
            texto[k] = toupper(texto[k]);
    }

return *texto;
}
