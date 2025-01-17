/* 19.2- Faça um programa que exiba uma contagem regressiva de 10 até 0, seguido da mensagem "Fogo!".*/

#include <stdio.h>

int main() {
    
    int num = 10;
    
    while(num > -1){
        printf("%d \n", num);
        num--;
        
        if(num == -1){
            printf("FOGO!");
        }
    }

    return 0;
}
