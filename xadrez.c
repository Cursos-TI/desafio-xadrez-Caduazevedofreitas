#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}


void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}


void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    const int tamanhoTabuleiro = 6;
    for (int x = 0; x < tamanhoTabuleiro; x++) {
        for (int y = 0; y < tamanhoTabuleiro; y++) {
            if (x - 2 >= 0 && y + 1 < tamanhoTabuleiro) {
    
                if ((x + y) % 2 == 0) continue;

                printf("Cavalo de (%d,%d) para (%d,%d): Cima-Cima-Direita\n", x, y, x - 2, y + 1);
            }

            if (x == 4 && y == 4) break; 
        }
    }
}


void moverBispoComLoop() {
    printf("\nMovimento do Bispo com Loops Aninhados:\n");

    for (int i = 1; i <= 4; i++) { 
        for (int j = 1; j <= 4; j++) { 
            if (i == j) {
                printf("Diagonal (%d,%d): Cima Direita\n", i, j);
            }
        }
    }
}

int main() {
    
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    moverCavalo();

    moverBispoComLoop();

    return 0;
}