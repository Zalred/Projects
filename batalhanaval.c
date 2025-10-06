#include <stdio.h>

int main(){
    // Vetor com as letras da coluna e navios
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int navioHorizontal [3] = {3, 3, 3};
    int navioVertical [3] = {3, 3, 3};

    // Matriz 10x10 representando o tabuleiro (água = 0)
    int tabuleiro[10][10] = {0};

    // Define as coordenadas iniciais do navio horizontal
    int linhanavioH = 3;   // Linha onde o navio começa
    int colunanavioH = 2;  // Coluna onde o navio começa

    // Define as coordenadas iniciais do navio vertical
    int linhanavioV = 5;   // Linha onde o navio começa
    int colunanavioV = 7;  // Coluna onde o navio começa

    // Posicionar o navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++){
        tabuleiro[linhanavioH][colunanavioH + i] = navioHorizontal[i];
    }

    // Posicionar o navio vertical no tabuleiro
    for (int i = 0; i < 3; i++){
        tabuleiro[linhanavioV + i][colunanavioV] = 3;
    }

    // Título
    printf("###  BATALHA NAVAL  ###\n");

    // Topo com as letras da coluna
    printf("  "); // 3 espaços para alinhar o tabuleiro com a coluna
    for (int c = 0; c < 10; c++){
        printf("%c ", colunas[c]); // imprime o topo A B C D E F G H I J
    }
    printf("\n");

    // Impressão das linhas
    for (int i = 0; i < 10; i++){
        printf("%d ", i + 1); // imprime o número da linha (1 a 10), alinhado com %d

        // Loop interno, imprime os valores (0 = água) de cada coluna
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}