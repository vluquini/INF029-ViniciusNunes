
#include <stdio.h>
#include <stdlib.h>
#define TAM 9

int main()
{   
    int separaNumero(int num);
    int numero, busca;
    int arrayNum[TAM] = {0}, arrayBusca[TAM] = {0};
    int qtVezes = 0;
    int digito1 = 0, digito2 = 0;//ARMAZENA QUANTIA DE DIGITOS EM CADA ENTRADA
    
    printf("\nNumero: ");
    scanf("%d", &numero);
    
    printf("Digito: ");
    scanf("%d", &busca);
    
    numero = separaNumero(numero);
    busca = separaNumero(busca);
    
    int aux;
    for(int i = 0; numero != 0; i++){
        //PASSANDO O VALOR INTEIRO PARA UM ARRAY//
        aux = numero % 10;
        arrayNum[i] = aux;
        numero = numero / 10;
        digito1++;
    }
    
    for(int j = 0; busca != 0; j++){
        //PASSANDO O VALOR DE BUSCA PARA UM ARRAY//
        arrayBusca[j] = busca % 10;
        busca = busca / 10;
        digito2++;
    }
      
  int cont = 0;
  for(int i = 0; i < digito1; ){
      int j = 0;
      cont = 0;
      while(arrayNum[i] == arrayBusca[j] && j < digito2){
            cont++;
            i++;
            j++;
      }
      if(cont == digito2){
        qtVezes++;
      }
      else
          i++;
  }
 
    printf("\nEste numero aparece %d vezes. ", qtVezes);

return 0;
}
int separaNumero(int num){
   
    int aux, invertido = 0;

    while(num != 0){
        aux = num % 10;
        invertido = invertido * 10 + aux;
        num = num / 10;
    }
    
return invertido;
}

