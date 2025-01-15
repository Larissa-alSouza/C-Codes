/* 15.2- Criar uma tabuada com while (pedindo para o usuário um número) */

#include <stdio.h>

int main() {
    
    int i = 0, tab, num;
    
    printf("Insira um número: ");
    scanf("%d", &num);
    
    while(i < 11){
        tab = num * i;
        
        printf("%d \n", tab);
        
        i++;
    }
    
    return 0;
}
