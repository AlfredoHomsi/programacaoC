#include <stdio.h>
 
int main() {
    int matriz[10][10];
 
    // Inicialização da matriz com base em condições simples
    for (int i = 0; i < 10; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 10; j++) {  // Loop interno para as colunas
            if (j == 2,11,12,13,22) {
                matriz[i][j] = 3; // Se a coluna for par, atribui 1
            } else {
                matriz[i][j] = 0; // Se a coluna for ímpar, atribui 0
            }
        }
    }
 
    // Impressão da matriz
    for (int i = 0; i < 10; i++) {      // Loop para imprimir cada linha
        for (int j = 0; j < 10; j++) {  // Loop para imprimir cada coluna
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}