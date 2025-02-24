#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int passos, const char *direcao) {
    if (passos == 0) return;
    printf("%s\n", direcao);
    moverTorre(passos - 1, direcao);
}

// Função recursiva para mover o Bispo (diagonal: Cima Direita)
void moverBispo(int passos, const char *dirVertical, const char *dirHorizontal) {
    if (passos == 0) return;
    printf("%s %s\n", dirVertical, dirHorizontal);
    moverBispo(passos - 1, dirVertical, dirHorizontal);
}

// Função recursiva para mover a Rainha
void moverRainha(int passos, const char *direcao) {
    if (passos == 0) return;
    printf("%s\n", direcao);
    moverRainha(passos - 1, direcao);
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5, "Direita");

    printf("\nMovimento do Bispo:\n");
    moverBispo(5, "Cima", "Direita");

    printf("\nMovimento da Rainha:\n");
    moverRainha(8, "Esquerda");

    printf("\nMovimento do Cavalo:\n");
    // Usando loops aninhados simulando as mov do cavalo:
    // 2 vezes para cima e 1 vez para a direita.
    for (int i = 1; i <= 2; i++) {
        printf("Cima \n", i);
    }
    // Movimento horizontal do Cavalo
    for (int j = 1; j <= 1; j++) {
        printf("Direita \n\n", j);
    }
   printf("**the end... rs**\n\n");
   printf("--feito por vinicius de andrade--\n");
    return 0;   
}
