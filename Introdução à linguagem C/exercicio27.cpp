#include <stdio.h>

int main() {
    
    int nums[5];
    int soma = 0, total = 0;
    
    for(int i = 0; i < 5; i++){
        printf("Digite um numero para nums[%d]: ", i);
        scanf("%d", &nums[i]);
    }
    
    printf("A média dos valores digitados é: ");
    for(int i = 0; i < 5; i++){
        soma = soma + nums[i];
        total = soma / nums[i];
    }
    
    printf("%d", total);

    return 0;
}
