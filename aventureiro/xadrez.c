#include <stdio.h>

int main() {
    // criação das variaveis constantes

    int rainha = 8;
    int bispo = 5;
    int torre = 5;
    int cavalo = 2;
    //for para movimentação da rainha

    printf("Rainha:\n");

    for (int i = 1; i <= rainha; i++) {
        printf("Esquerda\n");
    }

    printf("----------------------\n");

    //for para movimentação do bispo

    printf("Bispo:\n");

    for (int i = 1; i <= bispo; i++) {
        printf("Cima, Direita\n");
    }

    printf("----------------------\n");

    //for para movimentação da torre

    printf("Torre:\n");

    for (int i = 1; i <= bispo; i++) {
        printf("Direita\n");
    }

    printf("----------------------\n");
    
    //for para movimentação do cavalo

    printf("Cavalo:\n");

    for (int i = 1; i <= cavalo; i++) {
        for (int j = 1; j <= 2; j++) {
             printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    printf("----------------------\n");
    return 0;
}
