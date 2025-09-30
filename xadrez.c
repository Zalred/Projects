#include <stdio.h>

int main (){

    int bispo = 0, rainha = 0, movcavalo = 1;

    printf("Torre: ");
    for (int torre = 0; torre < 5; torre++) {
        printf("Direita >>\t");
    }
    printf("\n\n");

    printf("Bispo: ");
    while (bispo < 5) {
        printf("Cima ^^ Direita >>\t");
        bispo++;
    }
    printf("\n\n");
    
    printf("Rainha: ");
    do {
        printf("Esquerda <<\t");
        rainha++;
    } while (rainha < 8);
    printf("\n\n");

    printf("Cavalo: \n");
    while (movcavalo--) { // Condição externa, vai ser removido 1 dessa variável após a condição interna finalizar
        for (int cavalo = 0; cavalo < 2; cavalo++) { // Condição interna, vai ser somado 1 no valor da variável após ela rodar uma vez
            printf("Baixo\n"); // Vai ser printado "Baixo" até o valor da variável ser 2 (cavalo++)
        }
        printf("Esquerda\n\n"); // Vai ser printado "Esquerda" até o valor da variável ser 0 (movcavalo--)
    }
    
return 0;
}