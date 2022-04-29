// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Vinícius Luquini Nunes
//  email: theviniciusluquini@gmail.com
//  Matrícula: 20212160034
//  Semestre: 2

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021 - 19/08/2016

// #################################################

#include <stdio.h>
#include "ViniciusNunes20212160034.h" // Substitua pelo seu arquivo de header renomeado
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
## função utilizada para testes  ##

 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y)
{
    int soma;
    soma = x + y;
    return soma;
}

/*
## função utilizada para testes  ##

 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x)
{ //função utilizada para testes
  int i, fat = 1;
    
  for (i = x; i > 1; i--)
    fat = fat * i;
    
  return fat;
}

int teste(int a)
{
    int val;
    if (a == 2)
        val = 3;
    else
        val = 4;

    return val;
}


/*
DataQuebrada quebraData(char data[]){
  DataQuebrada dq;
  char sDia[3];
	char sMes[3];
	char sAno[5];
	int i; 

	for (i = 0; data[i] != '/'; i++){
		sDia[i] = data[i];	
	}
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sDia[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
    return dq;
  }  
	

	int j = i + 1; //anda 1 cada para pular a barra
	i = 0;

	for (; data[j] != '/'; j++){
		sMes[i] = data[j];
		i++;
	}

	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sMes[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
    return dq;
  }
	

	j = j + 1; //anda 1 cada para pular a barra
	i = 0;
	
	for(; data[j] != '\0'; j++){
	 	sAno[i] = data[j];
	 	i++;
	}

	if(i == 2 || i == 4){ // testa se tem 2 ou 4 digitos
		sAno[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
    return dq;
  }

  dq.iDia = atoi(sDia);
  dq.iMes = atoi(sMes);
  dq.iAno = atoi(sAno); 

	dq.valido = 1;
    
  return dq;
} 
*/
int q1(char data[]){

    //char data[12];
    //char *msgErro = "\nErro na data";
    char dia[3], mes[3], ano[5]; //DATA QUEBRADA
    int sDia, sMes, sAno; //DATA EM INTEIRO PARA VALIDAR
    int bissexto = 0;
    int datavalida = 0;

    //printf("Data: ");
    //fgets(data, 12, stdin);

// VALIDANDO CARACTERES **VAI ATÉ O \N, PQ NAO O REMOVI DA STRING...
    for(int i = 0; data[i] != '\0'; i++){
        if( (data[i] < '/') || (data[i] > '9') ){
        //puts(msgErro);
        return 0;
        break;
        }
    }

    int i = 0;
    //******DIAS
    for(i = 0; data[i] != '/'; i++){
        dia[i] = data[i];
    }
    if(i == 1 || i == 2){
        dia[i] = '\0';
    }
    else{
        //puts(msgErro);
        return 0;
    }

    //******MES
    int j = i + 1;
    i = 0;

    for(; data[j] != '/'; j++){
        mes[i] = data[j];
        i++;
    }
    if(i == 1 || i == 2){
        mes[i] = '\0';
    }
    else{
        //puts(msgErro);
        return 0;
    }

    //****ANOS
    j = j + 1;
    i = 0;
    for(; data[j] != '\0'; j++){
        ano[i] = data[j];
        i++;
    }

    if(i == 2 || i == 4){
        ano[i] = '\0';
    }
    else
        return 0;
    
    sDia = atoi(dia);
    sMes = atoi(mes);
    sAno = atoi(ano);

//PARA ANOS COM 2 DIGITOS, ACRESCENTA 2000 PARA VALIDAR BISSEXTO
//PRESSUPONDO Q QUALQUER ANO COM 2 DIGITOS SEJA DO SECULO 21
    if(sAno < 100){
        sAno += 2000;
    }

    if((sAno % 400 == 0) || (sAno % 4 == 0 && sAno % 100 != 0))
        bissexto = 1;

    if( (sDia > 0 && sDia <= 30) && (sMes == 4 || sMes == 6 || sMes == 9 || sMes == 11) ) {
                datavalida = 1;
                return datavalida;}
        else if( (sDia > 0 && sDia < 32)  && (sMes == 1 || sMes == 3 || sMes == 5 || sMes == 7 || sMes == 8 || sMes == 10 || sMes == 12) ){
          datavalida =1;      
          return datavalida;}
        else if( (sDia > 0 && sDia <=28) && (sMes == 2) ){
                datavalida = 1;
                return datavalida;}
        else if( (bissexto == 1) && (sMes == 2 && sDia == 29) ){
                datavalida = 1; 
                return datavalida;}
    else{
        return 0;
    }
    
datavalida = 1;
return datavalida;
}


/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. 
 @saida
    Retorna um tipo DiasMesesAnos. No atributo retorno, deve ter os possíveis valores abaixo
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
    Caso o cálculo esteja correto, os atributos qtdDias, qtdMeses e qtdAnos devem ser preenchidos com os valores correspondentes.
 */
DiasMesesAnos q2(char datainicial[], char datafinal[])
{

    //calcule os dados e armazene nas três variáveis a seguir
    DiasMesesAnos dma;

    if (q1(datainicial) == 0){
      dma.retorno = 2;
      return dma;
    }else if (q1(datafinal) == 0){
      dma.retorno = 3;
      return dma;
    }else{
      //verifique se a data final não é menor que a data inicial
      
      //calcule a distancia entre as datas


      //se tudo der certo
      dma.retorno = 1;
      return dma;
      
    }
    
}

/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */


//////////QUESTÃO 3/////////////
char caseSensitive(char texto[]){

    for(int k = 0; texto[k] != '\0'; k++)
        texto[k] = toupper(texto[k]);
    

return *texto;
}
int q3(char *texto, char caractere, int isSensitive)
{
    //char texto[250];
    //char caractere;
    int resultado = 0;
    int aux=0;
  
    if(isSensitive != 1){
      *texto = caseSensitive(texto);
      if( (caractere >= 'a') && (caractere <= 'z') )
      caractere -= 32;
      }

  //printf("TEXTO: %s\n" , texto);
  //printf("%c\n", caractere);

    for(int i = 0; texto[i] != '\0'; i++){
        if(texto[i] == caractere)
            resultado++;
    }
  //printf("Texto %s\n", texto);


return resultado;
}

 //Q4 = encontrar palavra em texto

int q4(char *strTexto, char *strBusca, int posicoes[30])
{
    //char texto[250], palavra[250];
    //int resultado[10] = {0}, 
    int sizePalavra = 0;
    int qtdVezes = 0;//ARMAZENA QUANTAS VEZES A PALAVRA APARECE NO TEXTO
    int aux = 0;//VARIAVEL AUXILIAR PARA INSERIR POSICAO NO VETOR DE RESULTADOS

    //RECEBE O TAMANHO DE CARACTERES DA PALAVRA
    //PARA INDICAR POSICAO INICIAL E FINAL...
    sizePalavra = strlen(strBusca);

    //PERCORRE O VETOR DO TEXTO ATE O FINAL
    //O VALOR DE 'I' SÓ SERÁ ACRESCENTADO ENQUANTO ENCONTRAR
    //TODOS OS CARACTERES CORRESPONDENTES À PALAVRA BUSCADA
    int j;
    int cont = 0;
    int m = 0;
    for(int i = 0; strTexto[i] != '\0'; i++){
        j = 0;
        cont = 0;
        m = i;
        //printf("\n===%c  ==  %c", texto[i], palavra[j]);
        while(strTexto[m] == strBusca[j]){
            cont++;
            j++;
            m++;
        }
        //printf("\n%d====%d\nm = %d\nj = %d", cont, sizePalavra, m, j);

        if(cont == sizePalavra){
            posicoes[aux] = i + 1;
            aux++;
            posicoes[aux] = i + sizePalavra;
            aux++;
            qtdVezes++;
            i++;
        }
    }

/*
    for(int i = 0; resultado[i] != 0; i++)
        printf("%d ", resultado[i]);
*/

return qtdVezes;
}


/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num)
{
    int invertido = 0;
    int aux;
    
    while(num != 0){
    aux = num % 10;
    invertido = invertido * 10 + aux;
    num = num / 10;
    }
    

return invertido;
}

/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */


  
//////////////QUESTÃO 6//////////
/*
int separaNumero(int num){
   
    int aux, invertido = 0;

    while(num != 0){
        aux = num % 10;
        invertido = invertido * 10 + aux;
        num = num / 10;
    }
    
return invertido;
}
*/
int q6(int numero, int busca)
{
    //int numero, busca;
    int arrayNum[TAM] = {0}, arrayBusca[TAM] = {0};
    int qtVezes = 0;
    int digito1 = 0, digito2 = 0;//ARMAZENA QUANTIA DE DIGITOS EM CADA ENTRADA

    
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

      
  int cont;
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
    //printf("\n%d\n", qtVezes);
 
    //printf("\nEste numero aparece %d vezes. ", qtVezes);

return qtVezes;
}


