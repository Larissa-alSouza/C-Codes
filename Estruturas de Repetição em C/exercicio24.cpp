#include <stdio.h>

int main() {
    
    int num = 0, valor = 0;
    
    printf("Quantos números você deseja verificar? ");
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++){
        
        printf("Digite o número %d: ", i);
        scanf("%d", &valor);
        
        if(valor % 2 == 0){
            printf("O número %d é par \n", valor);
        } else{
            printf("O número %d é impar \n", valor);
        }
    }

    return 0;
}
