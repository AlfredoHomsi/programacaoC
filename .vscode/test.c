#include <stdio.h>

//#define LINHAS 10
//#define COLUNAS 10

int main() {

    char letras[10]= {'A','B','C','D','E','F','G','H','I','J'};
    char posicao[10] ={1,2,3,4,5,6,7,8,9,10};
    

  //  int matriz [LINHAS][COLUNAS];
  //   matriz[0][2] = 3;

    int soma = 0;

       //
        
       { printf("TABULEIRO BATALHA NARVAL \n");
    
    for(int f= 0; f <10; f++)
    {
        printf(" ");
        printf("%c", letras[f]);
      //  printf(" ");
    }printf(" \n");}

    
    //
    for(int g = 0; g < 10; g++)
    {
        printf("%d ", posicao[g]);
        printf("0 ", posicao[g]);
        printf("0 ", posicao[g]);
        printf("0 ", posicao[g]);
        printf("0 ", posicao[g]);
        printf("0 ", posicao[g]);
        printf("0 ", posicao[g]);
        printf("0 ", posicao[g]);
        printf("0 ", posicao[g]);
        printf("0 ", posicao[g]);
        printf("0 \n", posicao[g]);
    }


   // for (int i = 0; i < LINHAS; i++){
     //   for (int j = 0; j < COLUNAS; j++){

      //      soma++;
      //      matriz[i][j] = soma;
      //      printf("0 ", matriz[i][j]);
      //  }printf ("\n");
    return 0;
}
    
    