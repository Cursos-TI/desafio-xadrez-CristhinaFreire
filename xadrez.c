#include <stdio.h>

int main() {
    // -----------------------------
    // Movimento da Torre (FOR LOOP)
    // -----------------------------
    // A torre se move em linha reta. Vamos simular 5 movimentos para a direita.
    printf("Movimento da Torre (5 casas para a Direita):\n");

    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i); // Imprime cada movimento
    }

    // -------------------------------
    // Movimento do Bispo (WHILE LOOP)
    // -------------------------------
    // O bispo se move em diagonal. Vamos simular 5 movimentos para cima e à direita.
    printf("\nMovimento do Bispo (5 casas para Cima Direita):\n");

    int contadorBispo = 1;
    while (contadorBispo <= 5) {
        printf("Cima Direita %d\n", contadorBispo); // Imprime a direção diagonal
        contadorBispo++;
    }

    // -----------------------------------
    // Movimento da Rainha (DO-WHILE LOOP)
    // -----------------------------------
    // A rainha pode se mover em todas as direções. Vamos simular 8 movimentos para a esquerda.
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");

    int contadorRainha = 1;
    do {
        printf("Esquerda %d\n", contadorRainha); // Imprime cada movimento
        contadorRainha++;
    } while (contadorRainha <= 8);

    return 0;
}
