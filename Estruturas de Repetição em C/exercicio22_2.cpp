/* 22.2- Peça ao usuário para inserir um número inteiro positivo e calcule o seu fatorial usando o loop for */

#include <stdio.h>

int main() {
    
    int num = 0, fatorial = 1;
    
    printf("Insira um número: ");
    scanf("%d", &num);
    
    for(int i = num; i > 0; i--){
        fatorial = fatorial * i;
    }
    
    printf("%d", fatorial);
    
    return 0;
}
