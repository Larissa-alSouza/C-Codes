#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("\t\t\t\tVerificador de números primos\n\n");
    
    printf("Insira um número: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; 
    } else {
        for (i = 2; i <= num / 2; i++) { 
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    if (isPrime) {
        printf("O número inserido é um número primo.\n");
    } else {
        printf("O número inserido não é um número primo.\n");
    }

    return 0;
}
