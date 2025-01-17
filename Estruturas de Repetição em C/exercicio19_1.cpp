/*19.1- Faça um programa que exiba uma contagem regressiva de 10 até 0, seguido da mensagem "Fogo!".*/

#include <stdio.h>

int main() {
    
    for(int i = 10; i > -1; i--){
        printf("%i \n", i);
        
        if(i == 0){
            printf("FOGO!");
        }
    }

    return 0;
}
