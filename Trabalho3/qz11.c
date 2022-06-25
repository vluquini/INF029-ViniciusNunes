#include <stdio.h>

int Multip_Rec(int n1, int n2){

  if(n1 == 0 || n2 == 0){
    return 0;
  }else{
    return n1 + Multip_Rec(n1, n2-1);
  }
  
}

int main(){
  
    int n1, n2, mult = 0;

    n1 = 8;
    n2 = 3;

    mult = Multip_Rec(n1, n2);
    
    printf("\nResultado da multiplicacao = %d", mult);

    return 0;
  }