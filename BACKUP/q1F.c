#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//****SAÍDA PARA QUESTÃO: 0 SE INVÁLIDO, 1 SE VÁLIDO.
int main(){

    char data[12];
    char *msgErro = "\nErro na data";
    char dia[3] , mes[3] , ano[5]; //DATA QUEBRADA
    int sDia, sMes, sAno; //DATA EM INTEIRO PARA VALIDAR
    int bissexto = 0;

    printf("Data: ");
    fgets(data, 12, stdin);

// VALIDANDO CARACTERES **VAI ATÉ O \N, PQ NAO O REMOVI DA STRING...
    for(int i = 0; data[i] != '\n'; i++){
        if( (data[i] < '/') || (data[i] > '9') ){
        puts(msgErro);
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
        puts(msgErro);
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
        puts(msgErro);
        return 0;
    }

    //****ANOS
    j = j + 1;
    i = 0;
    for(; data[j] != '\n'; j++){
        ano[i] = data[j];
        i++;
    }

    if(i == 2 || i == 4){
        ano[i] = '\0';
    }
    else{
        puts(msgErro);
        return 0;
    }

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
/*
    if(bissexto == 1)
        printf("\nAno bissexto.");
    else
        printf("\nAno nao eh bissexto.");
*/


    if( (sDia > 0 && sDia <= 30) && (sMes == 4 || sMes == 6 || sMes == 9 || sMes == 11) )
                return 1;
        else if( (sDia > 0 && sDia < 32)  && (sMes == 1 || sMes == 3 || sMes == 5 || sMes == 7 || sMes == 8
                  || sMes == 10 || sMes == 12) )
                return 1;
        else if( (sDia > 0 && sDia <=28) && (sMes == 2) )
                return 1;
        else if( (bissexto == 1) && (sMes == 2 && sDia == 29) )
                return 1;
    else{
        puts(msgErro);
        return 0;
    }


return 1;
}