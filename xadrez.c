#include <stdio.h> // Biblioteca de funções básicas (printf, scanf)

void movertorre (int casas){ // Ação void 'movertorre', executada apenas uma vez, sem retorno, com int 'casas'
    if (casas > 0){ // Se o número de casas for maior que 0, o código vai ser executado
        printf("Direita\n"); // Código de printar (imprimir) mensagem
        movertorre(casas -1); // No final da etapa, será removido 1 do número da int 'casas'
    }
}

// O mesmo acontece aqui
void moverbispo (int casas){ 
    if (casas > 0){
        printf("Cima, Direita\n");
        moverbispo(casas -1);
    }
}

// Versão com loop aninhado, um for dentro de um for
void moverbispoloop (int casas){
    for (int i = 0; i < casas; i++){
        for (int j = 0; j < 1; j++){
            printf("Cima, Direita\n");
        }
    }
}

void moverRainha (int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas -1);
    }
}

void movercavalo (int casas){
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < casas; j++){
            printf("Cima\n");
        }
        for (int k = 0; k < 1; k++){
            printf("Direita\n");
        }
    }
}

int main (){
    movertorre(5);
    moverbispo(5);
    moverbispoloop(5);
    moverRainha(8);
    movercavalo(2);
    return 0;
}