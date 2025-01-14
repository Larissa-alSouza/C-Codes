/* 12- peça ao usuário para adivinhar um número secreto até que ele acerte */

#include <stdio.h>

int main() {
    int numeroSecreto = 7;
    int palpite;

    printf("Adivinhe o número secreto (entre 1 e 10):\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite != numeroSecreto) {
            printf("Errado! Tente novamente.\n");
        }
    } while (palpite != numeroSecreto);

    printf("Parabéns! Você acertou o número secreto.\n");

    return 0;
}
