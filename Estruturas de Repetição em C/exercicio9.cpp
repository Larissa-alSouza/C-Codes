/* 9- Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0. */
    
#include <stdio.h>

int main() {
    int count = 0;
    int i = 1;

    printf("Os cinco primeiros números múltiplos de 3, são: ");

    while (count < 5) {
        if (i % 3 == 0) {
            printf("%d", i);
            count++;
            if (count < 5) {
                printf(", ");
            }
        }
        i++;
    }

    printf(".\n");
    return 0;
}
