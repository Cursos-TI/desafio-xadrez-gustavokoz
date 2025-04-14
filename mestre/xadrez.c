#include <stdio.h>

// Funções recursivas
void moverRainha(int vezes) {
    if (vezes <= 0) return;
    printf("Esquerda\n");
    moverRainha(vezes - 1);
}

void moverBispo(int vezes) {
    if (vezes <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(vezes - 1);
}

void moverTorre(int vezes) {
    if (vezes <= 0) return;
    printf("Direita\n");
    moverTorre(vezes - 1);
}

void subirDois() {
        printf("Baixo\n");
        printf("Baixo\n");
}
void moverCavalo(int vezes) {
    if (vezes <= 0) return;
    subirDois();
    printf("Esquerda\n");
    moverCavalo(vezes - 1);
}

int main() {
    // criação das variaveis constantes
    int rainha = 8;
    int bispo = 5;
    int torre = 5;
    int cavalo = 2;
    
    //for para movimentação da rainha

    printf("Rainha:\n");
    moverRainha(rainha);
    printf("----------------------\n");

    //for para movimentação do bispo

    printf("Bispo:\n");
    moverBispo(bispo);
    printf("----------------------\n");

    //for para movimentação do torre

    printf("Torre:\n");
    moverTorre(torre);
    printf("----------------------\n");

    //for para movimentação do Cavalo    

    printf("Cavalo:\n");
    moverCavalo(cavalo);
    printf("----------------------\n");

    return 0;
}
