#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 10
//DECLARAR AS FUNÇÕES AQUI
int menu();// OK
bool criarEstrutura(int *vetor[], int posicao, int tamanho[]);//OK
bool inserirNaEstrutura(int *vetor[], int posicao, int valor, int tamanho[]); 
void listarEstruturas(int *vetor[]);
void listarEstruturasOrdenadas();
void listarTodosElementosOrdenados();
bool excluirElementos();

  int *primeiraPos = NULL;
  int *segundaPos = NULL;
  int *terceiraPos = NULL;
  int *quartaPos = NULL;
  int *quintaPos = NULL;
  int *sextaPos = NULL;
  int *setimaPos = NULL;
  int *oitavaPos = NULL;
  int *nonaPos = NULL;
  int *decimaPos = NULL;

int main(){
  //int sair = 0; PARA ENCERRAR O PROGRAMA...

  int *vetorPrincipal[TAM] = { primeiraPos, segundaPos, terceiraPos, quartaPos, quintaPos, sextaPos, setimaPos, oitavaPos, nonaPos, decimaPos };
  
  int opcao = 1;
  int retorno;
  int posicao; //DA ESTRUTURA PRINCIPAL
  int tamanho[10] = {0}; //TAMANHO DE ESTRUTURA
  int valor;  //VALOR A SER INSERIDO EM UMA ESTRUTURA


  do{
    retorno = menu();
    if(retorno == 0){
      printf("\n> PROGRAMA ENCERRADO <");
      break;
    }
    
    if(retorno == 1){
      printf("\nESCOLHA A POSICAO NA ESTRUTURA AUXILIAR (DE 1 A 10)\n-> ");
      scanf("%d", &posicao);
      posicao -= 1;
      printf("ESCOLHA O TAMANHO DA ESTRUTURA\n-> ");
      scanf("%d", &tamanho[posicao]);
      criarEstrutura(vetorPrincipal, posicao, tamanho);
      
      }else if(retorno == 2){
        printf("DIGITE A POSICAO DA ESTRUTURA PARA INSERIR:\n-> ");
        scanf("%d", &posicao);
        posicao -= 1;
        printf("DIGITE O VALOR A SER INSERIDO:\n-> ");
        scanf("%d", &valor);
        inserirNaEstrutura(vetorPrincipal, posicao, valor, tamanho);
      }else if(retorno == 3){
        printf("ESTRUTURAS");



      
      }
  
  }while(1);

 /* 
  for(int i = 0; i < 5; i++){
    printf("\n%p", vetorPrincipal[i]);
  }
*/

return 0;
}

//FUNÇÕES EM BAIXO
int menu(){
  
  int opcao;
  do{
      printf("\nDIGITE A OPCAO DESEJADA: \n"
      "0 - SAIR\n"
      "1 - CRIAR ESTRUTURA\n"
      "2 - INSERIR ELEMENTO\n"
      "3 - LISTAR ESTRUTURAS\n"
      "4 - LISTAR ESTRUTURAS ORDENADAS\n"
      "5 - LISTAR TODOS OS ELEMENTOS ORDENADOS\n"
      "6 - EXCLUIR ELEMENTOS\n"
      "7 - AUMENTAR UMA ESTRUTURA\n-> ");
      scanf("%d", &opcao);
      if(opcao < 0 || opcao > 7)
        printf("OPCAO INVALIDA.\n");
      else{
        return opcao;
      }

  }while(1);


}

bool criarEstrutura(int *vetor[], int posicao, int tamanho[]){
/*
O MALLOC É FEITO NO VETOR PRINCIPAL COM AS POSICOES DOS PONTEIROS.
A VARIAVEL "TAMANHO" ARMAZENA OS TAMANHOS DAS ESTRUTURAS AUXILIARES, E A VARIAVEL "POSICAO" ARMAZENA A POSICAO DO VETOR AUXILIAR NO VETOR PRINCIPAL. OBS: POREM, O VETOR DE VARIAVEIS TAMANHO CONTEM UM VALOR DIFERENTE, QUE ELE RECEBE NA FUNÇAO MAIN AO PEDIR O USUARIO O TAMANHO DO VETOR AUXILIAR A SER CRIADO...
 **** PODE PRINTAR EM OUTRO LUGAR O ERRO
*/
  
  if(vetor[posicao] != NULL){
    printf("JA EXISTE UMA ESTRUTURA NESTA POSICAO!\n");
    return false;
  }else{
    vetor[posicao] = (int*)malloc(tamanho[posicao]*sizeof(int));
    /*
    for(int i = 0; i < vetor[posicao]; i++){
      *(vetor[posicao] + tamanho[posicao]) = 0;      
    }
  */
    if(vetor[posicao] == NULL){
      printf("\nSEM ESPAÇO NA MEMORIA!\n");
      return false;
    }else{
      return true;
    }
  }
  
}


bool inserirNaEstrutura(int *vetor[], int posicao, int valor, int tamanho[]){
  
  static int quantidade[TAM] = {0};
  static int aux = 0;

  if(quantidade[posicao] < tamanho[posicao]){
    *(vetor[posicao] + quantidade[posicao]) = valor;
    //printf("\n%d\n", *(vetor[posicao] + quantidade[posicao]));
    quantidade[posicao]++;
    //printf("\n*****%d", quantidade[posicao]);
    return true;
    }else{
      printf("\nNAO HA ESPAÇO NESTA ESTRUTURA!\n");
      return false;
    }
  
}

void listarEstruturas(int *vetor[]){

  for(int i = 0; vetor[i] < TAM; i++){
    printf("\n");
    for(int j = 0; vetor[TAM] + j != NULL; j++){
      printf("%d ", *(vetor[TAM] + j));
      
    }
  }

}





