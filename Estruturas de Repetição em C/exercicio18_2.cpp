/* 18.2- Faça um código para exibir apenas os números pares de 1 a 50.*/

#include <stdio.h>

int main() {
    
    int num = 0;
    
    while(num < 51){
        if(num % 2 == 0){
            printf("%d \n", num);
        }
        num++;
    }

    return 0;
}
