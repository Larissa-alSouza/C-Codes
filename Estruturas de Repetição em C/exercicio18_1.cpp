/* 18.1- Faça um código para exibir apenas os números pares de 1 a 50.*/

#include <stdio.h>

int main() {
    
    for(int i = 0; i < 51; i++){
        
        if(i % 2 == 0){
            printf("%d \n", i);
        }
    }

    return 0;
}
