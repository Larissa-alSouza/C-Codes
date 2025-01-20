#include <stdio.h>

int main() {
    
    int nums[5];
    
    for(int i = 0; i < 5; i++){
        printf("Digite um numero para nums[%d]: ", i);
        scanf("%d", &nums[i]);
    }
    
    printf("Valores digitados: ");
    for(int i = 0; i < 5; i++){
        printf("%d, ", nums[i]);
    }

    return 0;
}
