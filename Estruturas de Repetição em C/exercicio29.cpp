#include <stdio.h>

int main() {
    int num, t1 = 0, t2 = 1, proximoTermo;

    printf("Insira o número de termos da sequência de Fibonacci: ");
    scanf("%d", &num);

    printf("Sequência de Fibonacci:\n");

    for (int i = 1; i <= num; i++) {
        printf("%d ", t1);
        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;
    }

    printf("\n");
    return 0;
}
