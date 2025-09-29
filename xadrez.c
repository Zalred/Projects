#include <stdio.h>

int main (){
    int bispo = 0, rainha = 0;

    for (int torre = 0; torre < 5; torre++) {
        printf("Direita\n");
    }

    while (bispo < 5) {
        printf("Cima, Direita\n");
        bispo++;
    }
    
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);
    
return 0;
}