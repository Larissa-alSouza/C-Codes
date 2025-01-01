#include <stdio.h>

//3- Leia um número e imprima o resultado do quadrado deste número
int main() {
    
    int num = 0;
    
    printf("Insira um numero: ");
    scanf("%d", &num);
    
    int quadrado = num * num;
    printf("O resultado do quadrado deste numero e: %d", quadrado);

    return 0;
}
