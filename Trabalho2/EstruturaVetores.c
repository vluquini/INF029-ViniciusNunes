#include <stdio.h>
#include <stdlib.h>
#define TAM 10

#include "EstruturaVetores.h"

Vetor *vetorPrincipal[TAM];

/*
Objetivo: criar estrutura auxiliar na posição 'posicao'.
com tamanho 'tamanho'

Rertono (int)
    SUCESSO - criado com sucesso
    JA_TEM_ESTRUTURA_AUXILIAR - já tem estrutura na posição
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    SEM_ESPACO_DE_MEMORIA - Sem espaço de memória
    TAMANHO_INVALIDO - o tamanho deve ser maior ou igual a 1
*/

int criarEstruturaAuxiliar(int posicao, int tamanho){
  
  //posicao = posicao - 1;   
  int retorno = 0;

  if(ehPosicaoValida(posicao) == POSICAO_INVALIDA){
    // se posição é um valor válido {entre 1 e 10}
    printf("\nPOSICAO INVALIDA!\n");
    retorno = POSICAO_INVALIDA;
    return retorno;
  }else if(tamanho < 1){
    // o tamanho nao pode ser menor que 1
    printf("\nTAMANHO INVALIDO!\n");
    retorno = TAMANHO_INVALIDO;
    return retorno;
  }else if(vetorPrincipal[posicao] != NULL){
    // a posicao pode já existir estrutura auxiliar
    printf("\nJA HA UMA ESTRUTURA NESTA POSICAO!\n");
    retorno = JA_TEM_ESTRUTURA_AUXILIAR;
    return retorno;
  }else{
    // deu tudo certo, crie
    for(int i = 0; i < tamanho; i++){
      vetorPrincipal[posicao] = criarListaEncadeada(vetorPrincipal[posicao]);
      if(vetorPrincipal[posicao] == NULL){
        // o tamanho ser muito grande
        printf("\nERRO NA ALOCACAO! SEM ESPACO NA MEMORIA!\n");
        retorno = SEM_ESPACO_DE_MEMORIA;
      }
    }
  }
    printf("\nESTRUTURA CRIADA!!\n");
    retorno = SUCESSO; 

    return retorno;
}

/*
Objetivo: inserir número 'valor' em estrutura auxiliar da posição 'posicao'
Rertono (int)
    SUCESSO - inserido com sucesso
    SEM_ESPACO - não tem espaço
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
CONSTANTES
*/

int inserirNumeroEmEstrutura(int posicao, int valor){


    int retorno = 0;
    int existeEstruturaAuxiliar = 0;
    //int temEspaco = 0; //UTILIZADO ABAIXO COMO FUNÇÃO
    //int posicao_invalida = 0;

    if (ehPosicaoValida(posicao) == POSICAO_INVALIDA){
        //printf("\nPOSICAO INVALIDA!");
        retorno = POSICAO_INVALIDA;
    }else{
      // testar se existe a estrutura auxiliar
      if(vetorPrincipal[posicao] != NULL){
          if(temEspaco(posicao)){
            //insere
            inserirElemento(vetorPrincipal[posicao], valor);
            retorno = SUCESSO;
          }else{
              retorno = SEM_ESPACO;
          }
      }else{
          retorno = SEM_ESTRUTURA_AUXILIAR;
      }
    }

    return retorno;
}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar no final da estrutura.
ex: suponha os valores [3, 8, 7, 9,  ,  ]. Após excluir, a estrutura deve ficar da seguinte forma [3, 8, 7,  ,  ,  ].
Obs. Esta é uma exclusão lógica

Rertono (int)
    SUCESSO - excluido com sucesso
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroDoFinaldaEstrutura(int posicao){

  int retorno = 0;
  //realocarEstruturaAuxiliar(vetorPrincipal[posicao]);
  
  if(ehPosicaoValida(posicao) == POSICAO_INVALIDA){
    return POSICAO_INVALIDA;
  }else if(vetorPrincipal[posicao] != NULL){
          if(vetorPrincipal[posicao]->contador == 0){
            retorno = ESTRUTURA_AUXILIAR_VAZIA;
          }else{
            Vetor *vetor = vetorPrincipal[posicao];
            while(vetor->prox != NULL){
                vetor = vetor->prox;
                if(vetor->prox == NULL){
                  vetor->contador = 0;
              }
            }
                retorno = SUCESSO;
          }      
  }else
    retorno = SEM_ESTRUTURA_AUXILIAR;
  
    return retorno;
}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar da posição 'posicao'.
Caso seja excluido, os números posteriores devem ser movidos para as posições anteriores
ex: suponha os valores [3, 8, 7, 9,  ,  ] onde deve ser excluido o valor 8. A estrutura deve ficar da seguinte forma [3, 7, 9,  ,  ,  ]
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso 'valor' da estrutura na posição 'posicao'
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    NUMERO_INEXISTENTE - Número não existe
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar

*/
int excluirNumeroEspecificoDeEstrutura(int posicao, int valor){

  int retorno = 0;

  if(ehPosicaoValida(posicao) == POSICAO_INVALIDA){
    retorno = POSICAO_INVALIDA;
    return retorno;
  } 
  
  if(vetorPrincipal[posicao] == NULL){
    retorno = SEM_ESTRUTURA_AUXILIAR;
  }else if(vetorPrincipal[posicao]->contador == 0){
    retorno = ESTRUTURA_AUXILIAR_VAZIA;
  }else{
    Vetor *vetor = vetorPrincipal[posicao];
    while(vetor->prox != NULL){
      if(vetor->valores == valor && vetor->contador == 1){
        vetor->contador = 0;
        retorno = SUCESSO;
      }
      vetor = vetor->prox;
    }
  }

  return retorno;
}

// se posição é um valor válido {entre 1 e 10}
int ehPosicaoValida(int posicao){
  
  int retorno = 0;
  posicao -= 1;
  
  if (posicao < 0 || posicao > 9)
  {
        retorno = POSICAO_INVALIDA;
  }
  else
        retorno = SUCESSO;

  return retorno;
}
/*
Objetivo: retorna os números da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux

Retorno (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosEstruturaAuxiliar(int posicao, int vetorAux[]){

  int retorno = 0;
  int i = 0;
  
  if(ehPosicaoValida(posicao) == POSICAO_INVALIDA){
    retorno = POSICAO_INVALIDA;
  }else if(vetorPrincipal[posicao] == NULL){
    retorno = SEM_ESTRUTURA_AUXILIAR;
  }else{
        Vetor *vetor = vetorPrincipal[posicao];
        for(; vetor != NULL && vetor->contador == 1; i++){
              vetorAux[i] = vetor->valores;
              vetor = vetor->prox;
        }
      retorno = SUCESSO;
    }
    

  return retorno;
}

/*
Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[])
{

  int retorno = 0;

    
    return retorno;
}

/*
Objetivo: retorna os números de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

    int retorno = 0;
    return retorno;
}

/*
Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/
int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

    int retorno = 0;
    return retorno;
}

/*
Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1

Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor
*/
int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho)
{

    int retorno = 0;
    return retorno;
}

/*
Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.

Retorno (int)
    POSICAO_INVALIDA - posição inválida
    SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura
*/
int getQuantidadeElementosEstruturaAuxiliar(int posicao){
  
  int retorno = 0;
  int qtd = 0;
  //int i = 0;
  
  if(ehPosicaoValida(posicao) == POSICAO_INVALIDA){
    retorno = POSICAO_INVALIDA;
  }else if(vetorPrincipal[posicao] == NULL){
    //printf("\nAAAOBA!!");
    retorno = SEM_ESTRUTURA_AUXILIAR;
  }else{
    Vetor *vetor = vetorPrincipal[posicao];
    for( ; vetor != NULL && vetor->contador == 1; qtd++){
      vetor = vetor->prox;
    }
    if(qtd == 0){
      //printf("ESTRUTURA AUXILIAR VAZIA!!!!!");
      retorno = ESTRUTURA_AUXILIAR_VAZIA;
    }else
      retorno = qtd;
  }
  
    
    return retorno;
}

/*
Objetivo: montar a lista encadeada com cabeçote com todos os números presentes em todas as estruturas.

Retorno (No*)
    NULL, caso não tenha nenhum número nas listas
    No*, ponteiro para o início da lista com cabeçote
*/
No *montarListaEncadeadaComCabecote()
{

    return NULL;
}

/*
Objetivo: retorna os números da lista enceada com cabeçote armazenando em vetorAux.
Retorno void
*/
void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[])
{
}

/*
Objetivo: Destruir a lista encadeada com cabeçote a partir de início.
O ponteiro inicio deve ficar com NULL.

Retorno 
    void.
*/
void destruirListaEncadeadaComCabecote(No **inicio)
{
}

/*
Objetivo: inicializa o programa. deve ser chamado ao inicio do programa 

*/

void inicializar(){
  for(int i = 0 ; i< 10 ; i++){
    vetorPrincipal[i] = NULL;
  }
  
}


/*
Objetivo: finaliza o programa. deve ser chamado ao final do programa 
para poder liberar todos os espaços de memória das estruturas auxiliares.

*/

void finalizar(){



  
}

//******FUNCOES CRIADAS PARA USO DE LISTA ENCADEADA ABAIXO:


Vetor *criarListaEncadeada(Vetor *lista){

  Vetor *novo = (Vetor*)malloc(sizeof(Vetor));
  novo->contador = 0;
  novo->prox = lista;

  return novo;
}

void inserirElemento(Vetor *vetor, int valor){

  while(vetor != NULL){
    if(vetor->contador == 0){
      vetor->valores = valor;
      vetor->contador = 1;
      break;
    }
    vetor = vetor->prox; 
  }
}

int temEspaco(int posicao){
//RETORNO 1 OU 0 = SUCESSO OU SEM_ESPACO...
  int retorno = 0;
  Vetor* vetor = vetorPrincipal[posicao];

  for(int i = 0; vetor != NULL; ){
      if(vetor->contador == 0){
        retorno = 1;
        break;
      }
    vetor = vetor->prox;
  }

  return retorno;
}
