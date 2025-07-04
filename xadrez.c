#include <stdio.h>

int main() {
    int i;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
    printf("Direita\n");
    }

    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
    printf("Cima Direita\n");
        i++;
    }

    printf("Movimento da Rainha:\n");
    i = 1;
    do {
    printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
} 