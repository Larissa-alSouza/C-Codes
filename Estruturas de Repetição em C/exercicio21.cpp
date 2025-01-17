/* 21- Permita que o usuário insira um número e mostre a tabuada desse número de 1 a 10. */

#include <stdio.h>

int main() {
    
    int num = 0, tab = 0;
    
    printf("Insira um número: ");
    scanf("%d", &num);
    
    for(int i = 0; i <= 10; i++){
        tab = num * i;
        
        printf("%d \n", tab);
    }

    return 0;
}
