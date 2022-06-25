#include <stdio.h>
#include <stdlib.h>

#include "EstruturaVetores.h"

int menu();

void dobrar(int *x);

int menu()
{
    int op;
    printf("\nDigite a opção desejada\n");
    printf("0 - Sair\n"); //OK
    printf("1 - Criar estrutura\n"); //OK
    printf("2 - Inserir elemento em uma estrutura\n");//OK
    printf("3 - Excluir elemento no final da lista\n");//***
    printf("4 - Excluir elemento especifico da lista\n");//***
    printf("5 - Listar uma estrutura\n");
    printf("6 - Dobrar Numero\n-> ");
    //printf("6 - \n");
    scanf("%d", &op);
    return op;
}

int main(){
  //inicializar();
  int op;
  int sair = 0;
  int ret, retorno;
  int posicao, tamanho, valor;
  
  while (!sair){
    
    op = menu();
    switch (op){
      case 0:
          sair = 1;
          printf("PROGRAMA ENCERRADO!!");
          //finalizar();
          break;
      
      case 1:
        printf("Digite a posicao na estrutura principal:\n-> ");
        scanf("%d", &posicao);
        printf("Digite o tamanho:\n-> ");
        scanf("%d", &tamanho);
        criarEstruturaAuxiliar(posicao, tamanho);
        break;

      case 2:
        //inserir
        //TODO
        printf("Digite a posicao na estrutura principal\n-> ");
        scanf("%d", &posicao);
        printf("Digite o valor a ser inserido:\n-> ");
        scanf("%d", &valor);
        ret = inserirNumeroEmEstrutura(posicao, valor);
        if(ret == POSICAO_INVALIDA){
          printf("POSICAO INVALIDA!!\n");
        }else if(ret == SEM_ESTRUTURA_AUXILIAR){
          printf("\nSEM ESTRUTURA AUXILIAR!!\n");
        }else if(ret == SEM_ESPACO){
          printf("\nSEM ESPACO NA ESTRUTURA!!");
        }else{
          printf("\nSUCESSO AO INSERIR!!\n");
        }
        break;
      
      case 3:
        //excluir
        //TODO
          printf("Digite a posicao na estrutura principal:\n-> ");
          scanf("%d", &posicao);
          //printf("Digite o valor a excluir:\n-> ");
          //scanf("%d", &valor);
          ret = excluirNumeroDoFinaldaEstrutura(posicao);
          if(ret == POSICAO_INVALIDA){
            printf("POSICAO INVALIDA!!");
          }else if(ret == SEM_ESTRUTURA_AUXILIAR){
                  printf("SEM ESTRUTURA AUXILIAR!!");
          }else if(ret == ESTRUTURA_AUXILIAR_VAZIA){
                  printf("ESTRUTURA AUXILIAR VAZIA!!");
          }else{
                  printf("SUCESSO AO EXCLUIR!!");
            }
          break;

      case 4:
          printf("Digite a posicao da estrutura:\n-> ");
          scanf("%d", &posicao);
          printf("Digite o valor a ser excluido:\n-> ");
          scanf("%d", &valor);
          ret = excluirNumeroEspecificoDeEstrutura(posicao, valor);
          if(ret == POSICAO_INVALIDA){
            printf("\nPOSICAO INVALIDA!!\n");
          }else if(ret == SEM_ESTRUTURA_AUXILIAR){
            printf("\nSEM ESTRUTURA AUXILIAR!!\n");
          }else if(ret == ESTRUTURA_AUXILIAR_VAZIA){
            printf("\nESTRUTURA AUXILIAR VAZIA!!\n");
          }else if(ret == NUMERO_INEXISTENTE){
            printf("\nNUMERO INEXISTENTE NA LISTA!\n");
          }else{
            printf("\nSUCESSO AO EXCLUIR!!\n");
          }
          break;  
      
      case 5:
        //recuperar dados estrutura auxiliar
        //int posicao, retorno;
        printf("Qual a estrutura a ser listada (1..10)?\n-> ");
        scanf("%d", &posicao);
        //function para pegar os elementos das estruturas e imprimir logo abaixo
        int qtd = getQuantidadeElementosEstruturaAuxiliar(posicao);
        printf("\n====%d", qtd);
        if(qtd == POSICAO_INVALIDA){
          printf("Posição inválida");
        }else if(qtd == SEM_ESTRUTURA_AUXILIAR){
          //printf("\nAOBA!!");
          printf("SEM ESTRUTURA AUXILIAR!!\n");
        }else if(qtd == ESTRUTURA_AUXILIAR_VAZIA){
          printf("\nESTRUTURA AUXILIAR VAZIA!!");
        }else{ 
          // existe elemento
          int vetorAux[qtd];
          ret = getDadosEstruturaAuxiliar(posicao, vetorAux);
          if(ret == SUCESSO){
            //imprimir para os dados para o usuário
            printf("\n");
            int i = 0;
            for(; i < qtd; i++){
                printf("%d ", vetorAux[i]);
            }
            printf("\n");
          }
        }
        break;
        default:
          printf("opcao inválida\n");
    }
  }
  

  return 0;
}
      /*
      case 5:
        //dobrar
        //ler um numero
        //int valor;
        scanf("%i", &valor);
        //dobrar(&valor);

        //passar para um funcao (void dobrar(...)) que recebe o numero e dobra (EstruturaVetores.c)
        printf("%i", valor);

        break; */
