#include <stdio.h>

int buscaNum(int valor, int busca){

  if(valor == 0){
    return 0;
  }else{
    return buscaNum(valor / 10, busca) + ((valor % 10) == busca) ;
  }

}

int main(){
  
    int valor, busca, qtd = 0;

    valor = 333013131;
    busca = 3;

    qtd = buscaNum(valor, busca);
    
    printf("\nO numero %d aparece %d vezes.", busca, qtd);

    return 0;
  }