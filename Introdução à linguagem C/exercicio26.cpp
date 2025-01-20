#include <stdio.h>

int main() {
    
    int nums[5];
    int soma = 0;
    
    for(int i = 0; i < 5; i++){
        printf("Digite um numero para nums[%d]: ", i);
        scanf("%d", &nums[i]);
    }
    
    printf("Valores digitados: ");
    for(int i = 0; i < 5; i++){
        soma = soma + nums[i];
    }
    
    printf("%d", soma);

    return 0;
}
