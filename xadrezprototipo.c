#include <stdio.h>
 
int main() {
    int bispo = 1;
    int torre = 0;
    int rainha;
   

    while (bispo <= 5) {
        printf("%d\n", bispo);
        bispo++;

        do {
            printf("%d\n", torre);
            rainha++;
        } while (torre <= 5);

        for (int rainha = 0; rainha<5; rainha++) {
            printf("Direita\n");
        }
    }
   
    return 0;
}