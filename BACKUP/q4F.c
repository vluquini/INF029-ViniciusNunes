#include <stdio.h>
#include <string.h>

int main(){

    char texto[250], palavra[250];
    int resultado[10] = {0}, sizePalavra = 0;
    int qtdVezes = 0;//ARMAZENA QUANTAS VEZES A PALAVRA APARECE NO TEXTO
    int aux = 0;//VARIAVEL AUXILIAR PARA INSERIR POSICAO NO VETOR DE RESULTADOS

    printf("Digite o texto: ");
    fgets(texto, 250, stdin);

    printf("Digite a palavra: ");
    scanf("%s", &palavra);
    //RECEBE O TAMANHO DE CARACTERES DA PALAVRA
    //PARA INDICAR POSICAO INICIAL E FINAL...
    sizePalavra = strlen(palavra);

    //PERCORRE O VETOR DO TEXTO ATE O FINAL
    //O VALOR DE 'I' SÓ SERÁ ACRESCENTADO ENQUANTO ENCONTRAR
    //TODOS OS CARACTERES CORRESPONDENTES À PALAVRA BUSCADA
    int j;
    int cont = 0;
    int m = 0;
    for(int i = 0; texto[i] != '\0'; i++){
        j = 0;
        cont = 0;
        m = i;
        while(texto[m] == palavra[j]){
            cont++;
            j++;
            m++;
        }

        if(cont == sizePalavra){
            resultado[aux] = i + 1;
            aux++;
            resultado[aux] = i + sizePalavra;
            aux++;
            qtdVezes++;
            i++;
        }
    }

    printf("\nEsta palavra aparece %d vezes.", qtdVezes);
    printf("\nPosicoes iniciais e finais no vetor: ");

    for(int i = 0; resultado[i] != 0; i++)
        printf("%d ", resultado[i]);


return 1;
}


